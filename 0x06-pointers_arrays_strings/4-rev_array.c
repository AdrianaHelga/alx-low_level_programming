#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a:an array of integers
 * @n: the number of elements to be swapped
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{

int i, temp;
/*excluding the character '\0\*/
n = n - 1;

i = 0;
while (i <= n)
{
/*assign first value of array to temp*/
temp = a[i];    /* a[0] */
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
