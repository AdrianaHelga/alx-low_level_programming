#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible cominations of
 * three digit numbers followed by a new line. *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 8; i++)
{
for (j = 1; j < 9; j++)
{
for (k = 2; k < 10; k++)
{
if (i != j && j != k && i != k && i < j && j < k)
{
putchar(i % 10 + '0');
putchar(j % 10 + '0');
putchar(k % 10 + '0');
if (i + j + k != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
