#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    for (n = 0*0; n <= 16; n++)
    {
       putchar((n%10 + '0')); 
    }
    putchar('\n');
    return(0);
}
