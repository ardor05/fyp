
import { Toaster } from "@/components/ui/toaster";
import { Toaster as Sonner } from "@/components/ui/sonner";
import { TooltipProvider } from "@/components/ui/tooltip";
import { QueryClient, QueryClientProvider } from "@tanstack/react-query";
import { BrowserRouter, Routes, Route, Navigate } from "react-router-dom";
import Main from "./pages/Main";
import Charging from "./pages/Charging";
import Receipt from "./pages/Receipt";
import NotFound from "./pages/NotFound";

const queryClient = new QueryClient();

const App = () => (
  <QueryClientProvider client={queryClient}>
    <TooltipProvider>
      <Toaster />
      <Sonner position="top-center" closeButton className="z-50" />
      <BrowserRouter>
        <div className="max-w-md mx-auto">
          <Routes>
            <Route path="/" element={<Main />} />
            <Route path="/charging" element={<Charging />} />
            <Route path="/receipt" element={<Receipt />} />
            <Route path="*" element={<NotFound />} />
          </Routes>
        </div>
      </BrowserRouter>
    </TooltipProvider>
  </QueryClientProvider>
);

export default App;
