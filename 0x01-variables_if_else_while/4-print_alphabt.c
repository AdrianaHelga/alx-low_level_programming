#include <stdio.h>
/**
 * main - Entry point
 * description: prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e')
{
ch++;
}
else if (ch == 'q')
{
ch++;
}
putchar(ch);
}
putchar('\n');
return (0);
}
