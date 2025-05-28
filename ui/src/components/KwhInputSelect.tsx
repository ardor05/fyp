
import React from 'react';
import { Clock } from 'lucide-react';
import { Input } from "@/components/ui/input";
import { useIsMobile } from '@/hooks/use-mobile';

interface KwhInputSelectProps {
  value: string;
  onValueChange: (value: string) => void;
}

const KwhInputSelect: React.FC<KwhInputSelectProps> = ({ value, onValueChange }) => {
  const isMobile = useIsMobile();
  
  const handleChange = (e: React.ChangeEvent<HTMLInputElement>) => {
    // Only allow positive numbers with up to 2 decimal places
    const newValue = e.target.value;
    if (newValue === '' || (/^\d*\.?\d{0,2}$/.test(newValue) && parseFloat(newValue) >= 0)) {
      onValueChange(newValue);
    }
  };
  
  return (
    <div className="w-full">
      <div className="mb-2 flex items-center gap-2">
        <Clock size={isMobile ? 18 : 20} className="text-zappbot-blue" />
        <label className="text-sm font-semibold text-gray-300">Desired Energy (kWh)</label>
      </div>
      <div className="relative">
        <Input
          type="text"
          inputMode="decimal"
          value={value}
          onChange={handleChange}
          placeholder="Enter kWh amount"
          className="w-full bg-zappbot-black-light border-zappbot-blue/30 text-white text-sm sm:text-base h-11 pl-4 pr-12"
        />
        <div className="absolute right-3 top-1/2 transform -translate-y-1/2 text-gray-400 text-sm">
          kWh
        </div>
      </div>
    </div>
  );
};

export default KwhInputSelect;
