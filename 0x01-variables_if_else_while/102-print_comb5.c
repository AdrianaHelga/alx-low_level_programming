#include <stdio.h>
/**
 * main - Entry point
 * print all possible combinations of two
 * two-digit numbers followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int j;
    int k;
    int l;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 9; j++)
        {
            for(k = 0; k < 10; k++)
            {
                for(l = 0; l < 10; l++)
                {
                    if(!(l == i && k == j))
                    {
                        putchar(i%10 + '0');
                        putchar(j%10 + '0');
                        putchar(' ');
                        putchar(k%10 + '0');
                        putchar(l%10 + '0');
                        if(!(l + j == 18 && i + j == 17 && j == 9))
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
