#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
int slash;
int space;
if (n <= 0)
    _putchar('\n');

else
slash = 0;
while (slash < n)
{
    space = n;
    while (space < 0)
    {
        _putchar(' ');
    }
    _putchar('\\');
    _putchar('\n');
n--;

}
}
