#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
int a = 0;

while (a < 10)
{
if (a != 2 && a != 4)
_putchar((a % 10) + '0');
a++;
}

_putchar('\n');
}
