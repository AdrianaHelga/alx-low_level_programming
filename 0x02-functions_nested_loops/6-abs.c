#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: number to be computed to absolute value
 *
 * Return: the number
 */

int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
}
return (n);
}
