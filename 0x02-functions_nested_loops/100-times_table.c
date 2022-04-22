#include "main.h"
#include <stdio.h>

/**
 * print_times_table -  
 * 
 */

void print_times_table(int n)
{
int a, b;
int result;

if(n > 0 && n < 15)
{
	for (a = 0; a <= n; a++)
	{
		if (a != 0)
		{
			_putchar('\n');
		}
		for (b = 0; b <= n; b++)
		{
			result = a * b;
			if (result < 10)
			{
				if(b != 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(result % 10 + '0');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10)+ '0');
				_putchar((result % 10) + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
				
			}
			/*if (result )
			{
				_putchar(' ');
			}*/
					
		}

	}
	_putchar('\n');

}
}
