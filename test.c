#define  F_CPU 2000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  PORTC.DIRSET = PIN0_bm;       // bit 0 port C is set, it is an output

  while (1) {
    PORTC.OUTSET = PIN0_bm;     // bit 0 port C is high, led is on
    _delay_ms(250);
    PORTC.OUTCLR = PIN0_bm;     // bit 0 port C is low, led is off
    _delay_ms(250);
  }
}