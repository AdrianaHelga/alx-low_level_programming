#include "main.h"
/**
 * _strlen -  function that returns the length of a string.
 * 
 * return: nothing
 */
int _strlen(char *s)
{
int count = 0;
char *m;
*m = &s;
while (*s != '\0')
{
count++;
*s++;
}
return (count);
}
