#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: characters to be created
 * @size: number of characters in the array
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
{
return (NULL);
}

array = malloc(sizeof(char) * size);

/*check if malloc was succcessful*/

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
