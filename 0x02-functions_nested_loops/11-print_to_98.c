#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all
 * natural numbers
 * @n: parameter
 * Return: Always 0
 */

void print_to_98(int n)
{
	int n;

	for (n = 0; n < 99; n++)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
