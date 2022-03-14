#include <stdio.h>
/**
 * main - Entry point
 * description: prints all the numbers of base 16 in lowercase
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = '0';
char c = 'a';
while (ch <= '9')
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
return (0);
}
