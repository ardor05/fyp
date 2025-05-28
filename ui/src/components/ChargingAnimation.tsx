
import React from 'react';
import { Zap } from 'lucide-react';

interface ChargingAnimationProps {
  className?: string;
  batteryPercent?: number;
}

const ChargingAnimation: React.FC<ChargingAnimationProps> = ({ className = "", batteryPercent = 10 }) => {
  // Ensure battery percent is within 0-100 range
  const normalizedPercent = Math.min(100, Math.max(0, batteryPercent));
  
  return (
    <div className={`relative flex flex-col items-center justify-center ${className}`}>
      <div className="relative w-48 h-64 flex flex-col items-center justify-center bg-zappbot-black-light rounded-2xl border border-zappbot-blue/30 overflow-hidden">
        {/* Battery level indicator */}
        <div 
          className="absolute bottom-0 left-0 right-0 bg-zappbot-blue/50 transition-all duration-1000 ease-in-out"
          style={{ height: `${normalizedPercent}%` }}
        />
        
        {/* Lightning animation */}
        <div className="z-10 animate-pulse-charging">
          <Zap size={80} className="text-zappbot-blue animate-lightning" />
        </div>
        
        {/* Charge percentage */}
        <div className="absolute bottom-4 w-full text-center text-white font-bold text-2xl">
          {normalizedPercent}%
        </div>

        {/* Energy waves */}
        {[0, 1, 2].map((i) => (
          <div 
            key={i}
            className="absolute top-1/2 left-1/2 transform -translate-x-1/2 -translate-y-1/2 rounded-full border border-zappbot-blue/30 animate-pulse-charging"
            style={{ 
              width: `${(i+1) * 40}px`, 
              height: `${(i+1) * 40}px`, 
              animationDelay: `${i * 0.5}s`,
              opacity: 0.3
            }}
          />
        ))}
      </div>
      <p className="mt-4 text-zappbot-blue font-semibold text-lg neon-text">Charging in Progress</p>
    </div>
  );
};

export default ChargingAnimation;
