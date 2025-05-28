
import React from 'react';
import { format } from 'date-fns';
import { useIsMobile } from '@/hooks/use-mobile';

interface DigitalReceiptProps {
  location: string;
  parkingSpot: string;
  chargingMinutes: number;
  totalKwh: number;
  totalPrice: number;
  startTime: Date;
  endTime: Date;
}

const DigitalReceipt: React.FC<DigitalReceiptProps> = ({
  location,
  parkingSpot,
  chargingMinutes,
  totalKwh,
  totalPrice,
  startTime,
  endTime
}) => {
  const isMobile = useIsMobile();
  const fontSize = isMobile ? 'text-xs sm:text-sm' : 'text-sm';
  const headerSize = isMobile ? 'text-xl sm:text-2xl' : 'text-2xl';
  
  return (
    <div className="glassmorphism p-4 sm:p-6 rounded-xl max-w-sm mx-auto w-full">
      <div className="flex justify-center mb-4">
        <div className={`text-zappbot-blue neon-text font-bold ${headerSize} border-b-2 border-zappbot-blue/30 pb-2 px-6`}>
          Receipt
        </div>
      </div>
      
      <div className="text-center mb-4 sm:mb-6">
        <p className={`text-gray-400 ${fontSize}`}>{format(new Date(), 'MMMM dd, yyyy')}</p>
        <p className={`text-gray-400 ${fontSize}`}>Transaction ID: ZB-{Math.floor(Math.random() * 10000).toString().padStart(4, '0')}</p>
      </div>
      
      <div className="space-y-3 sm:space-y-4 text-left">
        <div className="flex justify-between">
          <span className={`text-gray-400 ${fontSize}`}>Location</span>
          <span className={`text-white font-medium ${fontSize}`}>{location}</span>
        </div>
        
        <div className="flex justify-between">
          <span className={`text-gray-400 ${fontSize}`}>Parking Spot</span>
          <span className={`text-white font-medium ${fontSize}`}>{parkingSpot}</span>
        </div>
        
        <div className="flex justify-between">
          <span className={`text-gray-400 ${fontSize}`}>Start Time</span>
          <span className={`text-white font-medium ${fontSize}`}>{format(startTime, 'HH:mm')}</span>
        </div>
        
        <div className="flex justify-between">
          <span className={`text-gray-400 ${fontSize}`}>End Time</span>
          <span className={`text-white font-medium ${fontSize}`}>{format(endTime, 'HH:mm')}</span>
        </div>
        
        <div className="flex justify-between">
          <span className={`text-gray-400 ${fontSize}`}>Duration</span>
          <span className={`text-white font-medium ${fontSize}`}>{Math.floor(chargingMinutes / 60)}h {chargingMinutes % 60}m</span>
        </div>
        
        <div className="flex justify-between">
          <span className={`text-gray-400 ${fontSize}`}>Energy Delivered</span>
          <span className={`text-white font-medium ${fontSize}`}>{totalKwh.toFixed(2)} kWh</span>
        </div>
        
        <div className="flex justify-between">
          <span className={`text-gray-400 ${fontSize}`}>Rate</span>
          <span className={`text-white font-medium ${fontSize}`}>RM 1.00/kWh</span>
        </div>
        
        <div className="border-t border-zappbot-blue/30 pt-3 mt-3">
          <div className="flex justify-between">
            <span className="text-white font-bold">Total</span>
            <span className="text-zappbot-blue font-bold neon-text">RM {totalPrice.toFixed(2)}</span>
          </div>
        </div>
      </div>
      
      <div className="mt-6 sm:mt-8 text-center text-xs sm:text-sm text-gray-400">
        <p>Thank you for using ZappBot</p>
        <p>Save the environment, one charge at a time.</p>
      </div>
    </div>
  );
};

export default DigitalReceipt;
