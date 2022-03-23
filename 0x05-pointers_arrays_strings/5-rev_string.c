#include "main.h"
#include<string.h>
/**
 * rev_string - function that reverses a string
 * @s: the string character to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{

/*store base address for the string*/
char *r_ptr = s;

/*while the value of the address s is not \0*/
while (*(r_ptr + 1) != '\0')

/*increase the position*/
r_ptr++;

/*while the value of the reverse position is greater than s*/
while (r_ptr > s)
{

/*assign a new temporary variable to hold the value at the reverse pointer*/
char temp = *r_ptr;

/*update the reverse pointer to the value at s*/
*r_ptr-- = *s;

/*update s to the temporary variable*/
*s++ = temp;
}
}
