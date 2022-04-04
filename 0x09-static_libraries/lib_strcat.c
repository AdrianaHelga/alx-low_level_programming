#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to string to be appended to
 * @src: pointer to string to append
 *
 * Return: pointer to first string
 */

char *_strcat(char *dest, char *src)
{
/*
* assign the beginning of the first string to start,
* so as not to loose the adress of the beginning of the first string
*/
char *start = dest;

/*loop to move pointer of dest to the last character i.e '\0' */
while (*dest != '\0')
{
dest++;
}


/*
*appends one character at a time from src to dest
*this is because after the first while loop
*dest is pointing to the null character of dest
*in the first iteration statement
*/
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
/*include a null character at the end of the dest string*/
*dest = '\0';
return (start);
}
