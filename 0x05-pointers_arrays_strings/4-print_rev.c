#include "main.h"
#include<string.h>

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: character to be used for reversal
 * return: nothing
 */

void print_rev(char *s)
{
int i = 0;
/*Get the string from first to last character*/
while (s[i])
{
i++;
}
/*print the string backwards*/
while (i--)
{
_putchar(s[i]);

}
_putchar('\n');
}
