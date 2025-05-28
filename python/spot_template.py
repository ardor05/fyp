#!/usr/bin/env python3
"""
Script to handle Parking Spot activation that prominently displays the laptop's IP address
"""

import datetime
import socket
import os
import time
import sys

def main(spot_number):
    """Display connection information when a Parking Spot is activated."""
    # Clear the screen
    os.system('cls' if os.name == 'nt' else 'clear')
    
    # Get hostname and IP address
    hostname = socket.gethostname()
    ip_address = socket.gethostbyname(hostname)
    current_time = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')
    
    # Print with formatting to make IP address stand out
    print("\n" + "=" * 70)
    print(f"{'PARKING SPOT ' + str(spot_number) + ' ACTIVATED':^70}")
    print("=" * 70)
    print(f"\nTriggered from mobile device at: {current_time}\n")
    
    print("=" * 70)
    print(f"{'LAPTOP CONNECTION INFORMATION':^70}")
    print("=" * 70)
    print(f"\nHostname: {hostname}")
    print(f"\n╔{'═' * 35}╗")
    print(f"║ IP ADDRESS: {ip_address:<21} ║")
    print(f"║ SPOT NUMBER: {spot_number:<20} ║")
    print(f"╚{'═' * 35}╝\n")
    
    print("=" * 70)
    print(f"{'CHARGING INITIATED SUCCESSFULLY':^70}")
    print("=" * 70 + "\n")
    
    # Keep terminal open
    print("This terminal will remain open. Press Ctrl+C to close.")
    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        print("\nScript terminated by user.")

if __name__ == "__main__":
    # Get the spot number from command line arguments or default to 1
    spot_num = 1
    if len(sys.argv) > 1:
        try:
            spot_num = int(sys.argv[1])
        except ValueError:
            print(f"Invalid spot number: {sys.argv[1]}. Using default: 1")
    
    main(spot_num)
