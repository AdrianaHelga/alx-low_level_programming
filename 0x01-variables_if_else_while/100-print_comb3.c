#include <stdio.h>
/**
 * main - Entry point
 * Description: print possible combinations of two digit numbers
 * followed by new line in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int j;
    for(i = 0; i < 9; i++)
    {
        for(j = 1; j < 10; j++)
        {
            if (i != j && i < j)
            {
                putchar(i%10 +'0');
                putchar(j%10 + '0');
                putchar(',');
                putchar(' ');
            }
        }
    }
    
    putchar('\n');
    return(0);
}
