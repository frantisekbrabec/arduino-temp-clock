#ifndef LEDDISPDEF
#define LEDDISPDEF

//**********************************************************
// Display type dependent part
// You can add your display driving here
// -------------------------------------
// ---- Common for VQE11,13,21,23 ------
// --- Display with common cathode -----
#if defined VQEX1 || defined VQEX3
// Turn on/off digit
#define TURNON HIGH
#define TURNOFF LOW
#endif
// ---- Common for VQE12,14,22,24, DA56 ------
// ------- Display with common anode ---------
#if defined VQEX2 || defined VQEX4 || defined DA56
// Turn on/off digit
#define TURNON LOW
#define TURNOFF HIGH
#endif
// ---- Common for VQEX1,X2 ------
// -- 3 and 1/2 digit display ----
#if defined VQEX1 || defined VQEX2
#define MAXDISVAL 1999
#define MINDISVAL -1999

// Assign segment to Arduino pin number
#define SEG0A 3
#define SEG0B 10
#define SEG0C 16
#define SEG0D 2
#define SEG0E 9
#define SEG0F 8
#define SEG0G 7
#define SEG0H 4
#endif
// ---- Common for VQEX3,X4 ----
// ------ 4 digit display ------
#if defined VQEX3 || defined VQEX4
#define SEG0A 7
#define SEG0B 10
#define SEG0C 3
#define SEG0D 16
#define SEG0E 4
#define SEG0F 9
#define SEG0G 8
#define SEG0H 2
#endif
// ---- Common for all VQEXX ------
#if defined VQEX1 || defined VQEX2 || defined VQEX3 || defined VQEX4 
// Assign segment to Arduino pin number
#define COM1 14
#define COM2 15
#define COM3 12
#define COM4 11

#define SEG1A 7
#define SEG1B 10
#define SEG1C 3
#define SEG1D 16
#define SEG1E 4
#define SEG1F 9
#define SEG1G 8
#define SEG1H 2

#define SEG2A 7
#define SEG2B 10
#define SEG2C 3
#define SEG2D 16
#define SEG2E 4
#define SEG2F 9
#define SEG2G 8
#define SEG2H 2

#define SEG3A 7
#define SEG3B 10
#define SEG3C 3
#define SEG3D 16
#define SEG3E 4
#define SEG3F 9
#define SEG3G 8
#define SEG3H 2
#endif
// ---- Common for all DA56 ------
#if defined DA56 
// Assign segment to Arduino pin number
#define COM1 11
#define COM2 12
#define COM3 15
#define COM4 14

#define SEG0A 4
#define SEG0B 16
#define SEG0C 9
#define SEG0D 7
#define SEG0E 8
#define SEG0F 2
#define SEG0G 3
#define SEG0H 10

#define SEG1A 4
#define SEG1B 3
#define SEG1C 8
#define SEG1D 9
#define SEG1E 10
#define SEG1F 16
#define SEG1G 7
#define SEG1H 2

#define SEG2A 4
#define SEG2B 16
#define SEG2C 9
#define SEG2D 7
#define SEG2E 8
#define SEG2F 2
#define SEG2G 3
#define SEG2H 10

#define SEG3A 4
#define SEG3B 3
#define SEG3C 8
#define SEG3D 9
#define SEG3E 10
#define SEG3F 16
#define SEG3G 7
#define SEG3H 2
#endif
// ---------------------------------------
#if defined VQEX3 || defined VQEX4 || defined DA56
#define MAXDISVAL 9999
#define MINDISVAL -999
#endif

// End of display type dependent part
// ****************************************************
#endif
