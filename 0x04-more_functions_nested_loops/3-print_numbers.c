#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
int a = 0;

while (a < 10)
{
_putchar((a % 10) + '0');
a++;
}
_putchar('\n');
}
