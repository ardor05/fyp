import { defineConfig } from "vite";
import react from "@vitejs/plugin-react-swc";
import path from "path";
import { componentTagger } from "lovable-tagger";

// https://vitejs.dev/config/
export default defineConfig(({ mode }) => ({
  server: {
    host: "0.0.0.0",  // Allow connections from all IP addresses
    port: 3000,
    strictPort: true,  // Don't try another port if 3000 is taken
    hmr: {
      host: "0.0.0.0",  // Allow HMR from all IP addresses
      port: 3001,       // Use a dedicated port for HMR
    },
  },
  plugins: [
    react(),
    mode === 'development' &&
    componentTagger(),
  ].filter(Boolean),
  resolve: {
    alias: {
      "@": path.resolve(__dirname, "./src"),
    },
  },
}));
