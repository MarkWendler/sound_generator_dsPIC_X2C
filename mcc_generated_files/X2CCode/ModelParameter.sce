// Scilab script file to store Model parameters
// This file is automatically executed by initProject.sce
// initScript.sce and this script is executed automatically, if model is opened from MPLAB X MCC X2C library.

// Simulation settings
endTime     = 5;
stepSize    = 1.0E-2; 
FIP_INT_MAX = 32767; // Make frequency calculation easy
X2C_sampleTime = 1/FIP_INT_MAX //1/32767 = 0.0000305
disp(X2C_sampleTime ,"X2C_sampleTime=");
// CODE GENERATION PARAMETERS


Vbar = 14 //14V battery

//Load wav file to lookup table
load_Table = wavread("test.wav",[1,4097])

