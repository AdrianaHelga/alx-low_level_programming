#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    for (n = 0; n < 10;)
    {
        putchar((n%10) + '0');
        n++;
    }
    putchar('\n');
    return(0);
}
