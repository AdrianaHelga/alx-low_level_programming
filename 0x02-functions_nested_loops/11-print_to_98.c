#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: number to be printed
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	while (n <= 98)
		{
			if (n < 10)
			{
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		n++;
		}
	_putchar('\n');

	while(n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');

	}
_putchar('\n');

	while(n >= 98)
	{
		if (n > 99)
		{
			_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	n--;	
	}
_putchar('\n');

	while (n < 0)
	{
		_putchar('-');
	}
	
}
