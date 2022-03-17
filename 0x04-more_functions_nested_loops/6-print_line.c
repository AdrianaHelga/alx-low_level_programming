#include "main.h"

/**
 * print_line: function that draws a straight line in the terminal.
 * @ch: character used to draw line.
 * return: 0 (success)
 */

void print_line(int n)
{
char ch = '-';
if ( n > 0)
{
    _putchar(ch);
}
else if (n == 0)
{
    _putchar('\n');
}
}
