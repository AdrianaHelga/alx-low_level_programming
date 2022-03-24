#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
/*both S1 and S2 are not a null character and they are identical*/
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 == *s2)
{
return (0); /* strings are identical*/
}
/*return the diffrence between the two in ASCII value*/
else
{
return (*s1 - *s2);
}
}
