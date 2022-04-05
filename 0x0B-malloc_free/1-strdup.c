#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to,
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string given as parameter
 * Return: pointer to new space
 */
char *_strdup(char *str)
{
char *s;
char *p;
int len = 0;

while (str[len])
len++;
s = malloc(len + 1);
p = s;
while (*str)
*p++ = *str++;
*p = '\0';
return (s);
}
