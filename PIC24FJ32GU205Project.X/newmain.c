/*
 * File:   newmain.c
 * Author: I71645
 *
 * Created on September 16, 2022, 12:20 PM
 */


#include <xc.h>
uint8_t m =10;
uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
void main() {
   uint8_t a = 0x05;
   TMR3 = a;
   m = TMR3;
   uint8_t c = 0x1F;
   PR1 = c;
   uint8_t b =0x08;
   TMR1 = b;
   uint8_t t = add(a,b,c);
   TMR3 = t;
   return;
}

