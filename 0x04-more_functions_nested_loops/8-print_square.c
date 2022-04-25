#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size : number of # to be printed
 *
 * Return: void
 */

void print_square(int size)
{
int a, b;

if (size <= 0)
{
_putchar('\n');
}

else
{
b = 0;
while (b < size)
{
a = 0;
while (a < size)
{
_putchar('#');
a++;

}
_putchar('\n');
b++;

}
}
}
