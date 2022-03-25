#include <stdio.h>
/**
 * main - Entry point
 * print all possible combinations of two
 * two-digit numbers followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a;
    int b;
    int c;
    int d;
    for(a = 0; a < 10; a++)
    {
        for(b = 0; b < 9; b++)
        {
            for(c = 0; c < 10; c++)
            {
                for(d = 0; d < 10; d++)
                {
                    if((!(a == d && c == b)) && c >= a && d >= b && b != d)
                    {
                        putchar(a%10 + '0');
                        putchar(b%10 + '0');
                        putchar(' ');
                        putchar(c%10 + '0');
                        putchar(d%10 + '0');
                        if(!(b + d == 18 && a + b == 17 && b == 9))
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                }
            }
        }
    }
    putchar('\n');
    return(0);
}
