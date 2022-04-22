#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Returns: nothing
 */

/**/
void times_table(void)
{
int a, b;
int result;

for (a = 0; a < 10; a++)
{
if (a != 0)
{
_putchar('\n');
}
for (b = 0; b < 10; b++)
{
result = a * b;
if (result >= 10)
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
else
{
if (b != 0)
{
_putchar(' ');
}
_putchar(result % 10 + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
