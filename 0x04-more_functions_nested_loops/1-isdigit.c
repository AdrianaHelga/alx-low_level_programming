#include "main.h"

/**
 * _isdigit - checks for digit
 *
 * @c: characher to be checked
 *
 * Return: 0(digit) or 1(otherwise)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

else
return (0);
}
