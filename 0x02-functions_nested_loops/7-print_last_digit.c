#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to be checked
 *
 * Return: last value of the digit 
 */

/*check me*/

int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
    n = n * (-1);
    last_digit = n % 10;
}
else
{
last_digit = n % 10;
}

return(last_digit);
}
