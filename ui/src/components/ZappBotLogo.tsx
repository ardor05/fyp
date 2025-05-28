import React from 'react';

interface ZappBotLogoProps {
  className?: string;
  size?: number; // interpreted as max width in px
}

const ZappBotLogo: React.FC<ZappBotLogoProps> = ({ className = "", size = 120 }) => {
  return (
    <div className={`flex flex-col items-center justify-center ${className}`}>
      <img
        src="/zappbot-logo.png"
        alt="ZappBot Logo"
        className="object-contain"
        style={{ maxWidth: size, maxHeight: size }}
      />
      <h1 className="text-zappbot-blue font-bold text-3xl mt-2 neon-text">ZappBot</h1>
    </div>
  );
};

export default ZappBotLogo;
