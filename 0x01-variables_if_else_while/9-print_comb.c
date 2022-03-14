#include <stdio.h>
/**
 * main - Entry point
 * Description: print all single digit numbers of base 10
 * starting from 0, then a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 0;

    while(num < 10)
    {
        putchar(num%10 + '0');
        if (num != 9)
        {
            putchar(',');
            putchar(' ');
        }
        num++;
    }
    putchar('\n');
    return(0);
}
