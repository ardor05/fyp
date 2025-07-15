import React, { useState, useEffect } from 'react';
import { useNavigate } from 'react-router-dom';
import { Button } from '@/components/ui/button';
import { toast } from 'sonner';
import { Zap } from 'lucide-react';
import ZappBotLogo from '@/components/ZappBotLogo';
import LocationSelect from '@/components/LocationSelect';
import ParkingSpotSelect from '@/components/ParkingSpotSelect';
import KwhInputSelect from '@/components/KwhInputSelect';
import ChargingSummary from '@/components/ChargingSummary';
import { useIsMobile } from '@/hooks/use-mobile';

const Main = () => {
  const navigate = useNavigate();
  const [location, setLocation] = useState("");
  const [parkingSpot, setParkingSpot] = useState("");
  const [desiredKwh, setDesiredKwh] = useState("");
  const isMobile = useIsMobile();
  
  const handleStartCharging = async () => {
    // Log values for debugging
    console.log('handleStartCharging called with:', { location, parkingSpot, desiredKwh });
    
    // Validate all fields are filled
    if (!location || !parkingSpot || !desiredKwh || parseFloat(desiredKwh) <= 0) {
      toast.error("Please fill in all required fields");
      return;
    }
    
    // Calculate charging time based on kWh and rate (0.9 kWh/minute)
    const kwhValue = parseFloat(desiredKwh);
    const chargingMinutes = Math.ceil(kwhValue / 0.9); // Using 0.9 kWh per minute
    
    if (!location || !parkingSpot || !chargingMinutes) {
      toast.error("Please fill in all fields");
      return;
    }

    const startTime = new Date();
    const chargingData = {
      location,
      parkingSpot,
      chargingMinutes,
      desiredKwh: kwhValue,
      startTime: startTime.toISOString(),
      estimatedEndTime: new Date(startTime.getTime() + chargingMinutes * 60000).toISOString(),
    };
    
    sessionStorage.setItem('chargingData', JSON.stringify(chargingData));
    
    console.log('Selected parking spot:', parkingSpot);
    if (parkingSpot && !isNaN(Number(parkingSpot))) {
      const spotNumber = Number(parkingSpot);
      console.log(`Parking Spot ${spotNumber} selected, making API call...`);
      
      try {
        toast.info(`Activating Parking Spot ${spotNumber}...`);
        
        // Show loading state
        const loadingToast = toast.loading('Connecting to server...');
        
        // Use the current host's IP for the API URL
        const isLocalhost = window.location.hostname === 'localhost' || window.location.hostname === '127.0.0.1';
        const apiBaseUrl = isLocalhost 
          ? 'http://172.22.146.227:5000'  // WSL2 IP for local development
          : `http://${window.location.hostname}:5000`;  // Same host as the frontend
          
        const response = await fetch(`${apiBaseUrl}/run-spot/${spotNumber}`);
        const data = await response.json();
        
        // Update loading toast with result
        toast.dismiss(loadingToast);
        
        if (data.success) {
          toast.success(`Parking Spot ${spotNumber} activated successfully`);
          console.log('Server response:', data);
          
          // Navigate to charging page after a short delay
          setTimeout(() => {
            navigate('/charging');
          }, 1000);
          
        } else {
          toast.error(data.message || `Failed to activate spot ${spotNumber}`);
          console.error('Server error:', data);
        }
      } catch (error) {
        console.error('Error connecting to server:', error);
        toast.error("Could not connect to the server. Please try again.");
      }
    }
  };
  
  return (
    <div className="min-h-screen bg-zappbot-black flex flex-col p-4 sm:p-6">
      <div className="flex-1 flex flex-col items-center">
        <ZappBotLogo className="my-4 sm:my-8 animate-float" size={isMobile ? 70 : 90} />
        
        <div className="w-full max-w-md space-y-4 sm:space-y-6">
          <LocationSelect value={location} onValueChange={setLocation} />
          <ParkingSpotSelect value={parkingSpot} onValueChange={setParkingSpot} />
          <KwhInputSelect value={desiredKwh} onValueChange={setDesiredKwh} />
          
          {desiredKwh && parseFloat(desiredKwh) > 0 && (
            <ChargingSummary totalKwh={parseFloat(desiredKwh)} />
          )}
          
          <Button 
            onClick={handleStartCharging}
            className="w-full py-4 sm:py-6 mt-4 sm:mt-8 bg-zappbot-blue hover:bg-zappbot-blue-light text-black font-bold text-base sm:text-lg"
          >
            <Zap className="mr-2" size={isMobile ? 20 : 24} />
            Start Charging Now
          </Button>
        </div>
      </div>
      
      <footer className="text-center text-gray-500 text-xs sm:text-sm mt-6 sm:mt-10">
        <p> {new Date().getFullYear()} ZappBot | Futuristic EV Charging</p>
      </footer>
    </div>
  );
};

export default Main;
