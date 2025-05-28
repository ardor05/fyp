
import React from 'react';
import { LocateIcon, CarFront } from 'lucide-react';
import { 
  Select,
  SelectContent,
  SelectGroup,
  SelectItem,
  SelectTrigger,
  SelectValue
} from "@/components/ui/select";
import { useIsMobile } from '@/hooks/use-mobile';

interface LocationSelectProps {
  value: string;
  onValueChange: (value: string) => void;
}

const locations = [
  "Shah Alam Central Mall",
  "Subang Jaya Shopping Center",
  "KLCC Parking",
  "Mid Valley Megamall",
  "IOI City Mall",
  "Pavilion KL",
  "Sunway Pyramid",
  "The Gardens Mall",
];

const LocationSelect: React.FC<LocationSelectProps> = ({ value, onValueChange }) => {
  const isMobile = useIsMobile();
  
  return (
    <div className="w-full">
      <div className="mb-2 flex items-center gap-2">
        <LocateIcon size={isMobile ? 18 : 20} className="text-zappbot-blue" />
        <label className="text-sm font-semibold text-gray-300">Select Location</label>
      </div>
      <Select value={value} onValueChange={onValueChange}>
        <SelectTrigger className="w-full bg-zappbot-black-light border-zappbot-blue/30 text-white text-sm sm:text-base h-11">
          <SelectValue placeholder="Select a location" />
        </SelectTrigger>
        <SelectContent className="bg-zappbot-black-light text-white border-zappbot-blue/30">
          <SelectGroup>
            {locations.map((location) => (
              <SelectItem key={location} value={location} className="focus:bg-zappbot-blue/20 text-sm sm:text-base">
                <div className="flex items-center gap-2">
                  <CarFront size={isMobile ? 14 : 16} className="text-zappbot-blue" />
                  <span>{location}</span>
                </div>
              </SelectItem>
            ))}
          </SelectGroup>
        </SelectContent>
      </Select>
    </div>
  );
};

export default LocationSelect;
