#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: length of the line to be drawn
 *
 * Return: nothing
 */

void print_line(int n)
{
int a;
if (n <= 0)
{
    _putchar('\n');
}

else
{
a = 0;
while (a < n)
{
    _putchar('_');
    n--;
}
_putchar('\n');
}
}
