
import React from 'react';
import { Zap } from 'lucide-react';
import { useIsMobile } from '@/hooks/use-mobile';

interface ChargingSummaryProps {
  chargingMinutes: number;
}

const ChargingSummary: React.FC<ChargingSummaryProps> = ({ chargingMinutes }) => {
  // Calculate kWh based on charging time (using rate of 0.9 kWh per minute)
  const chargingRate = 0.9; // kWh per minute
  const totalKwh = parseFloat((chargingMinutes * chargingRate).toFixed(2));
  const totalPrice = parseFloat(totalKwh.toFixed(2)); // RM1 per kWh
  
  // Format charging duration
  const formatDuration = (minutes: number) => {
    const hours = Math.floor(minutes / 60);
    const mins = minutes % 60;
    
    if (hours > 0) {
      return `${hours} ${hours === 1 ? 'hour' : 'hours'}${mins > 0 ? ` ${mins} min` : ''}`;
    }
    return `${mins} minutes`;
  };
  
  const isMobile = useIsMobile();
  
  return (
    <div className="glassmorphism rounded-2xl p-4 w-full">
      <div className="flex items-center gap-2 mb-2">
        <Zap size={isMobile ? 18 : 20} className="text-zappbot-blue" />
        <h3 className="font-semibold text-gray-300 text-sm sm:text-base">Charging Summary</h3>
      </div>
      
      <div className="grid grid-cols-2 gap-2 text-left">
        <div className="text-gray-400 text-sm sm:text-base">Charging Duration:</div>
        <div className="text-right font-semibold text-white text-sm sm:text-base">
          {formatDuration(chargingMinutes)}
        </div>
        
        <div className="text-gray-400 text-sm sm:text-base">Total Energy:</div>
        <div className="text-right font-semibold text-white text-sm sm:text-base">
          {totalKwh.toFixed(2)} kWh
        </div>
        
        <div className="text-gray-400 text-sm sm:text-base">Price Rate:</div>
        <div className="text-right font-semibold text-white text-sm sm:text-base">RM 1.00/kWh</div>
        
        <div className="text-gray-400 text-base sm:text-lg pt-2">Total Price:</div>
        <div className="text-right font-bold text-base sm:text-lg text-zappbot-blue pt-2">
          RM {totalPrice.toFixed(2)}
        </div>
      </div>
    </div>
  );
};

export default ChargingSummary;
