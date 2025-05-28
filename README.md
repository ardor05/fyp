# EV Charging Station Management System

This project is a final year project (FYP) implementing an EV Charging Station Management System with a mobile-friendly UI and remote laptop connectivity.

## Project Structure

The project consists of two main components:

### 1. UI (React + TypeScript)
- A modern web application for managing EV charging sessions
- Supports selecting from 20 different parking spots
- Mobile-friendly interface
- Located in the `/ui` directory

### 2. Python Backend
- Command server for handling requests from the mobile UI
- Runs scripts on the laptop for each parking spot
- Located in the `/python` directory

## Features

- Remote activation of charging spots from mobile devices
- Real-time connection to laptop for terminal commands
- Dynamic handling of up to 20 parking spots
- Mobile-friendly interface
- Cross-device communication over local network

## Getting Started

### Starting the Python Server
```
cd python
python command_server.py
```

### Starting the React UI
```
cd ui
npm install
npm run dev
```

### Accessing from Mobile
Access the UI from a mobile device using the laptop's IP address:
```
http://<laptop-ip>:3000
```

Or use the simplified control interface:
```
http://<laptop-ip>:8888/mobile_control.html
```
