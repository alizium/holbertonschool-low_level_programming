#include "main.h"

/**
* jack_bauer - Prints every minute of the day from 00:00 to 23:59
*/
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++) /* Loop through hours */
{
for (minute = 0; minute < 60; minute++) /* Loop through minutes */
{
_putchar('0' + (hour / 10)); /* Print first digit of hour */
_putchar('0' + (hour % 10)); /* Print second digit of hour */
_putchar(':'); /* Print colon */
_putchar('0' + (minute / 10)); /* Print first digit of minute */
_putchar('0' + (minute % 10)); /* Print second digit of minute */
_putchar('\n'); /* Print newline */
}
}
}
