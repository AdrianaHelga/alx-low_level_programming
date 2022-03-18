#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{

unsigned int long n = 612852475143, i = (int) sqrt(n);

while (1)
{

if (n % i == 0)
{
printf("%lu \n", n / i);
break;
}
i--;

}

return (0);
}
