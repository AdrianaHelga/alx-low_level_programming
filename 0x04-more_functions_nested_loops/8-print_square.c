#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @n : number of # to be printed
 * Return:void
 */

void print_square(int n)
{

int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar('#');
for (j = 1; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
