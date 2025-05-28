#!/usr/bin/env python3
"""
Script to handle Parking Spot 1 activation that prominently displays the laptop's IP address
"""

import datetime
import socket
import os
import time

def main():
    """Display connection information when Parking Spot 1 is activated."""
    # Clear the screen
    os.system('cls' if os.name == 'nt' else 'clear')
    
    # Get hostname and IP address
    hostname = socket.gethostname()
    ip_address = socket.gethostbyname(hostname)
    current_time = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')
    
    # Print with formatting to make IP address stand out
    print("\n" + "=" * 60)
    print(f"{'PARKING SPOT 1 ACTIVATED':^60}")
    print("=" * 60)
    print(f"\nTriggered from mobile device at: {current_time}\n")
    
    print("=" * 60)
    print(f"{'LAPTOP CONNECTION INFORMATION':^60}")
    print("=" * 60)
    print(f"\nHostname: {hostname}")
    print(f"\n╔{'═' * 30}╗")
    print(f"║ IP ADDRESS: {ip_address:<16} ║")
    print(f"╚{'═' * 30}╝\n")
    
    print("=" * 60)
    print(f"{'CHARGING INITIATED SUCCESSFULLY':^60}")
    print("=" * 60 + "\n")
    
    # Keep terminal open
    print("This terminal will remain open. Press Ctrl+C to close.")
    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        print("\nScript terminated by user.")

if __name__ == "__main__":
    main()
