#!/usr/bin/env python3
"""
Command server that opens a new terminal window to run spot scripts for different parking spots
"""
from flask import Flask, jsonify, request
import socket
import subprocess
import os
import sys
import time

app = Flask(__name__)

# Enable CORS for all origins
@app.after_request
def after_request(response):
    response.headers.add('Access-Control-Allow-Origin', '*')
    response.headers.add('Access-Control-Allow-Headers', 'Content-Type,Authorization')
    response.headers.add('Access-Control-Allow-Methods', 'GET,PUT,POST,DELETE,OPTIONS')
    return response

@app.route('/', methods=['GET'])
def index():
    """Simple index route to verify server is running"""
    hostname = socket.gethostname()
    ip_address = socket.gethostbyname(hostname)
    return jsonify({
        'status': 'Server running',
        'ip_address': ip_address,
        'hostname': hostname,
        'timestamp': time.time()
    })

@app.route('/run-spot/<int:spot_number>', methods=['GET'])
def run_spot(spot_number):
    """Handle spot activation requests"""
    try:
        # Get client IP
        client_ip = request.remote_addr
        is_local = client_ip in ['127.0.0.1', 'localhost'] or client_ip.startswith('192.168.') or client_ip.startswith('172.')
        
        if not is_local:
            # For remote requests, just log and return success without opening terminal
            print(f"Remote request from {client_ip} - logging only")
            return jsonify({
                'success': True,
                'message': f'Request received for Parking Spot {spot_number} (remote)',
                'ip_address': socket.gethostbyname(socket.gethostname()),
                'hostname': socket.gethostname(),
                'client_ip': client_ip,
                'timestamp': time.strftime('%Y-%m-%d %H:%M:%S')
            })

        # Original logic for local requests - open terminal
        script_dir = os.path.dirname(os.path.abspath(__file__))
        spot_script_path = os.path.join(script_dir, 'spot_template.py')
        terminal_command = f'wt.exe -p "Ubuntu" -d "~" wsl python3 "{spot_script_path}" {spot_number}'
        
        print(f"Executing: {terminal_command}")
        process = subprocess.Popen(terminal_command, shell=True)
        
        return jsonify({
            'success': True,
            'message': f'Terminal window opened for Parking Spot {spot_number}',
            'ip_address': socket.gethostbyname(socket.gethostname()),
            'hostname': socket.gethostname(),
            'client_ip': client_ip,
            'timestamp': time.strftime('%Y-%m-%d %H:%M:%S')
        })
        
    except Exception as e:
        return jsonify({
            'success': False,
            'error': str(e),
            'message': f'Failed to process spot {spot_number}'
        }), 500

if __name__ == '__main__':
    # Get the laptop's IP address
    hostname = socket.gethostname()
    ip_address = socket.gethostbyname(hostname)
    
    print("\n" + "=" * 70)
    print(f"{'COMMAND SERVER STARTING':^70}")
    print("=" * 70)
    print(f"\nServer running at: http://{ip_address}:5000")
    print(f"Hostname: {hostname}")
    print(f"\nTo test from browser: http://{ip_address}:5000/run-spot1")
    print("\nMobile devices on the same network can access this server")
    print("using the IP address above.")
    print("\n" + "=" * 70 + "\n")
    
    # Run the Flask app on all network interfaces
    app.run(host='0.0.0.0', port=5000, debug=True)
