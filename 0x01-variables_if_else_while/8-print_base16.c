#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = '0';
    char c = 'a';
    while(ch <= '9')
    {
       putchar(ch);
       ch++;
    }

    while (c <= 'f')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return(0);
}
