
import React, { useState, useEffect } from 'react';
import { useNavigate } from 'react-router-dom';
import { Button } from '@/components/ui/button';
import { toast } from 'sonner';
import ZappBotLogo from '@/components/ZappBotLogo';
import DigitalReceipt from '@/components/DigitalReceipt';
import { useIsMobile } from '@/hooks/use-mobile';

const Receipt = () => {
  const navigate = useNavigate();
  const [receiptData, setReceiptData] = useState<any>(null);
  const [isLoaded, setIsLoaded] = useState(false);
  const isMobile = useIsMobile();
  
  useEffect(() => {
    // Get receipt data from session storage
    const storedData = sessionStorage.getItem('receiptData');
    if (!storedData) {
      navigate('/');
      return;
    }
    
    const data = JSON.parse(storedData);
    setReceiptData(data);
    setIsLoaded(true);
  }, [navigate]);
  
  const handleNewCharge = () => {
    // Clear session storage
    sessionStorage.removeItem('chargingData');
    sessionStorage.removeItem('receiptData');
    
    // Go back to main page
    navigate('/');
    toast.success("Ready for a new charging session!");
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
        
        <div className="w-full max-w-md space-y-4 sm:space-y-6">
          <DigitalReceipt
            location={receiptData.location}
            parkingSpot={receiptData.parkingSpot}
            chargingMinutes={receiptData.actualMinutes}
            totalKwh={receiptData.totalKwh}
            totalPrice={receiptData.totalPrice}
            startTime={new Date(receiptData.startTime)}
            endTime={new Date(receiptData.endTime)}
          />
          
          <div className="glassmorphism rounded-xl p-4 text-center mt-4 sm:mt-6">
            <p className="text-white text-sm sm:text-base">Charger has been unplugged</p>
            <p className="text-zappbot-blue font-medium mt-1 text-sm sm:text-base">Returning to base</p>
          </div>
          
          <Button 
            onClick={handleNewCharge}
            className="w-full py-4 sm:py-6 mt-4 sm:mt-8 bg-zappbot-blue hover:bg-zappbot-blue-light text-black font-bold text-base sm:text-lg"
          >
            Start New Charging Session
          </Button>
        </div>
      </div>
      
      <footer className="text-center text-gray-500 text-xs sm:text-sm mt-6 sm:mt-10">
        <p>© {new Date().getFullYear()} ZappBot | Thank you for charging with us</p>
      </footer>
    </div>
  );
};

export default Receipt;
