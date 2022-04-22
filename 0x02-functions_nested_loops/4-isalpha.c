#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 (is a letter i.e.success) or 0 (otherwise)
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
