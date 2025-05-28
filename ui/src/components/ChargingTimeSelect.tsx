
import React from 'react';
import { Clock } from 'lucide-react';
import { 
  Select,
  SelectContent,
  SelectGroup,
  SelectItem,
  SelectTrigger,
  SelectValue
} from "@/components/ui/select";
import { useIsMobile } from '@/hooks/use-mobile';

interface ChargingTimeSelectProps {
  value: string;
  onValueChange: (value: string) => void;
}

// Charging time options in minutes
const chargingTimes = [
  { label: "30 minutes", value: "30" },
  { label: "1 hour", value: "60" },
  { label: "1.5 hours", value: "90" },
  { label: "2 hours", value: "120" },
  { label: "2.5 hours", value: "150" },
  { label: "3 hours", value: "180" },
  { label: "4 hours", value: "240" },
];

const ChargingTimeSelect: React.FC<ChargingTimeSelectProps> = ({ value, onValueChange }) => {
  const isMobile = useIsMobile();
  
  return (
    <div className="w-full">
      <div className="mb-2 flex items-center gap-2">
        <Clock size={isMobile ? 18 : 20} className="text-zappbot-blue" />
        <label className="text-sm font-semibold text-gray-300">Charging Time</label>
      </div>
      <Select value={value} onValueChange={onValueChange}>
        <SelectTrigger className="w-full bg-zappbot-black-light border-zappbot-blue/30 text-white text-sm sm:text-base h-11">
          <SelectValue placeholder="Select charging time" />
        </SelectTrigger>
        <SelectContent className="bg-zappbot-black-light text-white border-zappbot-blue/30">
          <SelectGroup>
            {chargingTimes.map((time) => (
              <SelectItem key={time.value} value={time.value} className="focus:bg-zappbot-blue/20 text-sm sm:text-base">
                {time.label}
              </SelectItem>
            ))}
          </SelectGroup>
        </SelectContent>
      </Select>
    </div>
  );
};

export default ChargingTimeSelect;
