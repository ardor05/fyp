
import React, { useState, useEffect } from 'react';
import { useNavigate } from 'react-router-dom';
import { Button } from '@/components/ui/button';
import { toast } from 'sonner';
import { Zap, CarFront, Clock } from 'lucide-react';
import ZappBotLogo from '@/components/ZappBotLogo';
import ChargingAnimation from '@/components/ChargingAnimation';
import { useIsMobile } from '@/hooks/use-mobile';
import {
  AlertDialog,
  AlertDialogContent,
  AlertDialogHeader,
  AlertDialogTitle,
  AlertDialogDescription,
  AlertDialogFooter,
  AlertDialogAction,
  AlertDialogCancel,
} from "@/components/ui/alert-dialog";

const Charging = () => {
  const navigate = useNavigate();
  const [timeLeft, setTimeLeft] = useState("");
  const [parkingSpot, setParkingSpot] = useState("");
  const [chargingData, setChargingData] = useState<any>(null);
  const [isLoaded, setIsLoaded] = useState(false);
  const [percentComplete, setPercentComplete] = useState(0);
  const [showUnplugAlert, setShowUnplugAlert] = useState(false);
  const [showConfirmationAlert, setShowConfirmationAlert] = useState(false);
  const isMobile = useIsMobile();
  
  useEffect(() => {
    // Get charging data from session storage
    const storedData = sessionStorage.getItem('chargingData');
    if (!storedData) {
      navigate('/');
      return;
    }
    
    const data = JSON.parse(storedData);
    setChargingData(data);
    setParkingSpot(data.parkingSpot);
    setIsLoaded(true);
    
    // Set up timer
    const updateTimeLeft = () => {
      const now = new Date();
      const end = new Date(data.estimatedEndTime);
      const msLeft = end.getTime() - now.getTime();
      
      if (msLeft <= 0) {
        setTimeLeft("Completed");
        setPercentComplete(100);
        setShowUnplugAlert(true);
        return;
      }
      
      const totalDuration = new Date(data.estimatedEndTime).getTime() - new Date(data.startTime).getTime();
      const elapsed = now.getTime() - new Date(data.startTime).getTime();
      const percentDone = Math.min(Math.floor((elapsed / totalDuration) * 100), 100);
      setPercentComplete(percentDone);
      
      const minsLeft = Math.floor(msLeft / 60000);
      const secsLeft = Math.floor((msLeft % 60000) / 1000);
      setTimeLeft(`${minsLeft}:${secsLeft.toString().padStart(2, '0')}`);
    };
    
    updateTimeLeft();
    const timer = setInterval(updateTimeLeft, 1000);
    
    return () => clearInterval(timer);
  }, [navigate]);
  
  const handleStopCharging = () => {
    if (chargingData) {
      // Calculate actual charging duration and other details
      const startTime = new Date(chargingData.startTime);
      const endTime = new Date();
      const actualMinutes = Math.floor((endTime.getTime() - startTime.getTime()) / 60000);
      const chargingRate = 0.123; // kWh per minute
      const totalKwh = actualMinutes * chargingRate;
      const totalPrice = totalKwh * 1; // RM1 per kWh
      
      // Store the receipt data
      const receiptData = {
        ...chargingData,
        endTime: endTime.toISOString(),
        actualMinutes,
        totalKwh,
        totalPrice
      };
      
      sessionStorage.setItem('receiptData', JSON.stringify(receiptData));
      
      toast.info("Charging stopped. Generating receipt...");
      navigate('/receipt');
    }
  };
  
  const handleConfirmUnplug = () => {
    setShowUnplugAlert(false);
    setShowConfirmationAlert(true);
  };
  
  const handleConfirmPlacement = () => {
    if (chargingData) {
      // Calculate actual charging duration and other details
      const startTime = new Date(chargingData.startTime);
      const endTime = new Date();
      const actualMinutes = Math.floor((endTime.getTime() - startTime.getTime()) / 60000);
      const totalKwh = chargingData.desiredKwh;
      const totalPrice = totalKwh * 1; // RM1 per kWh
      
      // Store the receipt data
      const receiptData = {
        ...chargingData,
        endTime: endTime.toISOString(),
        actualMinutes,
        totalKwh,
        totalPrice
      };
      
      sessionStorage.setItem('receiptData', JSON.stringify(receiptData));
      
      toast.success("Charging completed successfully!");
      navigate('/receipt');
    }
  };
  
  if (!isLoaded) {
    return <div className="min-h-screen bg-zappbot-black flex items-center justify-center">
      <p className="text-zappbot-blue text-xl sm:text-2xl">Loading...</p>
    </div>;
  }
  
  return (
    <div className="min-h-screen bg-zappbot-black flex flex-col p-4 sm:p-6">
      <div className="flex-1 flex flex-col items-center">
        <ZappBotLogo className="my-4" size={isMobile ? 100 : 100} />
        
        <div className="w-full max-w-md space-y-4 sm:space-y-6 flex flex-col items-center">
          <ChargingAnimation className="my-4 sm:my-6" batteryPercent={percentComplete} />
          
          <div className="glassmorphism rounded-2xl p-4 w-full">
            <div className="grid grid-cols-2 gap-3 sm:gap-4 text-left">
              <div className="flex items-center gap-2">
                <CarFront size={isMobile ? 18 : 20} className="text-zappbot-blue" />
                <span className="text-gray-400 text-sm sm:text-base">Parking Spot:</span>
              </div>
              <div className="text-right font-semibold text-white text-sm sm:text-base">{parkingSpot}</div>
              
              <div className="flex items-center gap-2">
                <Clock size={isMobile ? 18 : 20} className="text-zappbot-blue" />
                <span className="text-gray-400 text-sm sm:text-base">Time Remaining:</span>
              </div>
              <div className="text-right font-mono text-base sm:text-lg font-semibold text-zappbot-blue neon-text">{timeLeft}</div>
            </div>
          </div>
          
          <Button 
            onClick={handleStopCharging}
            className="w-full py-4 sm:py-6 mt-4 sm:mt-8 bg-destructive hover:bg-destructive/80 font-bold text-base sm:text-lg"
            variant="destructive"
          >
            STOP CHARGING
          </Button>
        </div>
      </div>
      
      <AlertDialog open={showUnplugAlert} onOpenChange={setShowUnplugAlert}>
        <AlertDialogContent className="bg-zappbot-black-light border border-zappbot-blue/30">
          <AlertDialogHeader>
            <AlertDialogTitle className="text-xl text-zappbot-blue">Charging Complete</AlertDialogTitle>
            <AlertDialogDescription className="text-gray-300">
              Your vehicle is fully charged. Please unplug the charger as soon as possible.
            </AlertDialogDescription>
          </AlertDialogHeader>
          <AlertDialogFooter>
            <AlertDialogAction 
              className="bg-zappbot-blue text-white hover:bg-zappbot-blue/80"
              onClick={handleConfirmUnplug}
            >
              OK
            </AlertDialogAction>
          </AlertDialogFooter>
        </AlertDialogContent>
      </AlertDialog>
      
      <AlertDialog open={showConfirmationAlert} onOpenChange={setShowConfirmationAlert}>
        <AlertDialogContent className="bg-zappbot-black-light border border-zappbot-blue/30">
          <AlertDialogHeader>
            <AlertDialogTitle className="text-xl text-zappbot-blue">Confirmation</AlertDialogTitle>
            <AlertDialogDescription className="text-gray-300">
              Have you unplugged the charger and placed it at the robot?
            </AlertDialogDescription>
          </AlertDialogHeader>
          <AlertDialogFooter>
            <AlertDialogCancel className="border-gray-700 text-gray-300">
              Not Yet
            </AlertDialogCancel>
            <AlertDialogAction 
              className="bg-zappbot-blue text-white hover:bg-zappbot-blue/80"
              onClick={handleConfirmPlacement}
            >
              Confirm
            </AlertDialogAction>
          </AlertDialogFooter>
        </AlertDialogContent>
      </AlertDialog>
      
      <footer className="text-center text-gray-500 text-xs sm:text-sm mt-6 sm:mt-10">
        <p>© {new Date().getFullYear()} ZappBot | Charging in progress</p>
      </footer>
    </div>
  );
};

export default Charging;
