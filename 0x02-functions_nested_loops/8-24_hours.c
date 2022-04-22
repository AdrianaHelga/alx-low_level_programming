#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer, upto 23:59
 *
 * Returns: nothing
 */

void jack_bauer(void)
{
int a, b, c, d;

for (a = 0; a < 3; a++)
{
for (b = 0; b < 10; b++)
{
for (c = 0; c < 6; c++)
{
for (d = 0; d < 10; d++)
{

if (a <= 1)
{
_putchar(a % 10 + '0');
_putchar(b % 10 + '0');
_putchar(':');
_putchar(c % 10 + '0');
_putchar(d % 10 + '0');
_putchar('\n');
}

else if (a == 2 && b < 4)
{
_putchar(a % 10 + '0');
_putchar(b % 10 + '0');
_putchar(':');
_putchar(c % 10 + '0');
_putchar(d % 10 + '0');
_putchar('\n');
}
}
}
}
}
}
