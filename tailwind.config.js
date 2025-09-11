/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
    "./index.html",
    "./src/**/*.{js,ts,jsx,tsx}", // ajuste conforme seu projeto
  ],
  theme: {
    extend: {
      colors: {
              'brand-sangue': '#bd0000ff',
              'brand-morte': '#d8d8d2ff',
              'brand-conhecimento': '#f5e617ff',
              'brand-energia': '#8218faff',
              'brand-medo': '#ffffffff',
              'brand-varia': '#9b9b9bff',
            },
    },
  },
safelist: [
  'hover:bg-brand-sangue/10', 'hover:bg-brand-morte/10', 'hover:bg-brand-conhecimento/10', 'hover:bg-brand-energia/10', 'hover:bg-brand-medo/10', 'hover:bg-brand-varia/10',
  'hover:shadow-brand-sangue/30', 'hover:shadow-brand-morte/30', 'hover:shadow-brand-conhecimento/30', 'hover:shadow-brand-energia/30', 'hover:shadow-brand-medo/30', 'hover:shadow-brand-varia/30',
  'bg-brand-sangue/20', 'bg-brand-morte/20', 'bg-brand-conhecimento/20', 'bg-brand-energia/20', 'bg-brand-medo/20', 'bg-brand-varia/20',
],
  plugins: [],
}