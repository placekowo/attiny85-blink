#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS 10

int main (void) {
    DDRB |= _BV(DDB4); // set pin4 of portb as output

    for(;;) {
        PORTB |= _BV(PORTB4); // set pin4 high, and delay
        _delay_ms(BLINK_DELAY_MS);

        PORTB &= ~_BV(PORTB4); // set pin4 low, and delay
        _delay_ms(BLINK_DELAY_MS);
    }
}