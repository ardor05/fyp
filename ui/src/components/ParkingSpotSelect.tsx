
import React from 'react';
import { CarFront } from 'lucide-react';
import { 
  Select,
  SelectContent,
  SelectGroup,
  SelectItem,
  SelectTrigger,
  SelectValue
} from "@/components/ui/select";
import { useIsMobile } from '@/hooks/use-mobile';

interface ParkingSpotSelectProps {
  value: string;
  onValueChange: (value: string) => void;
}

// Generate parking spots 1-20
const parkingSpots = Array.from({ length: 20 }, (_, i) => (i + 1).toString());

const ParkingSpotSelect: React.FC<ParkingSpotSelectProps> = ({ value, onValueChange }) => {
  const isMobile = useIsMobile();
  
  return (
    <div className="w-full">
      <div className="mb-2 flex items-center gap-2">
        <CarFront size={isMobile ? 18 : 20} className="text-zappbot-blue" />
        <label className="text-sm font-semibold text-gray-300">Parking Spot</label>
      </div>
      <Select value={value} onValueChange={onValueChange}>
        <SelectTrigger className="w-full bg-zappbot-black-light border-zappbot-blue/30 text-white text-sm sm:text-base h-11">
          <SelectValue placeholder="Select parking spot" />
        </SelectTrigger>
        <SelectContent className="bg-zappbot-black-light text-white border-zappbot-blue/30">
          <SelectGroup>
            {parkingSpots.map((spot) => (
              <SelectItem key={spot} value={spot} className="focus:bg-zappbot-blue/20 text-sm sm:text-base">
                Spot {spot}
              </SelectItem>
            ))}
          </SelectGroup>
        </SelectContent>
      </Select>
    </div>
  );
};

export default ParkingSpotSelect;
