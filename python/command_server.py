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
    """Open a new terminal window and run the spot script for the specified parking spot"""
    # Validate spot number
    if spot_number < 1 or spot_number > 20:
        return jsonify({
            'success': False,
            'message': f'Invalid spot number: {spot_number}. Must be between 1 and 20.'
        })
    
    try:
        # Get the absolute path to the spot_template.py script
        script_dir = os.path.dirname(os.path.abspath(__file__))
        spot_script_path = os.path.join(script_dir, 'spot_template.py')
        
        # Command to open a new terminal window with a distinctive title
        # Use /K to keep the window open after the command finishes
        terminal_command = f'start "PARKING SPOT {spot_number} - {time.strftime("%H:%M:%S")}" cmd.exe /k "python \"{spot_script_path}\" {spot_number}"'
        
        # Log the command being executed
        print(f"Executing command: {terminal_command}")
        
        # Execute the command to open a new terminal window
        # shell=True is required for the 'start' command to work
        process = subprocess.Popen(terminal_command, shell=True)
        
        # Get the laptop's IP address
        hostname = socket.gethostname()
        ip_address = socket.gethostbyname(hostname)
        
        # Log the request information
        client_ip = request.remote_addr
        print(f"Request from {client_ip} at {time.strftime('%Y-%m-%d %H:%M:%S')}")
        print(f"Opening terminal window and running {hello_world_path}")
        
        return jsonify({
            'success': True,
            'message': f'Terminal window opened for Parking Spot {spot_number}',
            'ip_address': ip_address,
            'hostname': hostname,
            'client_ip': client_ip,
            'timestamp': time.strftime('%Y-%m-%d %H:%M:%S')
        })
    except Exception as e:
        error_message = str(e)
        print(f"Error: {error_message}")
        return jsonify({
            'success': False,
            'message': f'Error executing script: {error_message}'
        })

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
