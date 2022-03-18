#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * followed by new line
 * Return: 0(success)
 */

void print_numbers(void)
{

char ch = 0;

while (ch <= 9)
{
_putchar(ch + '0');
ch++;
}
_putchar('\n');
}
