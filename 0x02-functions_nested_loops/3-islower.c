#include "main.h"

/**
 * _islower - checks for lowercase letter
 *
 * @c: character to be checked
 *
 * Return: 1 (lowercase) or 0 (uppercase)
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
