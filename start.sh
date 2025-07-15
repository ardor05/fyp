#!/bin/bash

# Open a new terminal window and run the UI server
gnome-terminal -- bash -c "cd ~/fyp/ui && npm run dev; exec bash"

# Open another new terminal window and run the command server
gnome-terminal -- bash -c "cd ~/fyp/python && source venv/bin/activate && python command_server.py; exec bash"
