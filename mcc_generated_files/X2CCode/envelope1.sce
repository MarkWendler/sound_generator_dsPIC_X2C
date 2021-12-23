// timeing for omega
tw1 = 0.02;
tw2 = 0.05;
tw3 = 0.1;
tw4 = 1.0;
tw5 = 1.5;
tw6 = 0.1;

// omega steps
w1 = 0.1; //Max amplitude
w2 = 1;
w3 = 0.1;
simulation_time = 2.6;

if (tw1+tw2+tw3+tw4+tw5+tw6)> simulation_time then
   mprintf('calculated time for omega is longer than simulation_time '); 
end

t = (0:0.01:simulation_time);

omega_input.time = t';
omega_input.values(find(0 <= t & t < tw1)) = w1;
omega_input.values(find(tw1 <= t & t < tw1+tw2)) = linspace(w1,w2,size(find(tw1 <= t & t < tw1+tw2),"c"))';
omega_input.values(find(tw1+tw2 <= t & t < tw1+tw2+tw3)) = w2;
omega_input.values(find(tw1+tw2+tw3 <= t & t < tw1+tw2+tw3+tw4)) = linspace(w2,w3,size(find(tw1+tw2+tw3 <= t & t < tw1+tw2+tw3+tw4),"c"))';
omega_input.values(find(tw1+tw2+tw3+tw4 <= t & t < tw1+tw2+tw3+tw4+tw5)) = w3;
omega_input.values(find(tw1+tw2+tw3+tw4+tw5 <= t & t < tw1+tw2+tw3+tw4+tw5+tw6)) = linspace(w3,0.0,size(find(tw1+tw2+tw3+tw4+tw5 <= t & t < tw1+tw2+tw3+tw4+tw5+tw6),"c"))';
omega_input.values(find(tw1+tw2+tw3+tw4+tw5+tw6 <= t & t <= simulation_time)) = 0;

scf(1);

h1 = plot(omega_input.time, omega_input.values);
title("Omega");
xgrid(1);

amplitudeTable = resize_matrix(omega_input.values', 1, 257);
