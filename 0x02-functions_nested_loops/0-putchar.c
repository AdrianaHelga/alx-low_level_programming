#include "main.h"

/**
 * main - entry point
 *
 * program that prints _putchar followed by newline
 *
 * Return: nothing
 */

int main(void)
{
char c[9] = "_putchar";
int n;

for (n = 0; n < 9;)
{
_putchar(c[n]);
n++;
}

_putchar('\n');
return (0);
}
