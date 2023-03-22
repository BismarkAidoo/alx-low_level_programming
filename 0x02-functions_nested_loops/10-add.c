#include "main.h"

/**
 * add - a function that adds two integers
 * and returns the results
 * @int: parameter
 * Return: Always 0
 */

int add(int x, int y)
{
	int sum = x + y;

	if (sum < 0)
	{
		_putchar('-');
		sum = -sum;
	}
	if (sum == 0)
	{
		_putchar('0');
	}
	else
	{
		int digits[10];
		int i = 0;

		while (sum > 0)
		{
			digits[i++] = sum % 10;
			sum /= 10;
		}
		while (i > 0)
		{
			_putchar(digits[--i] + '0');
		}
	}
	_putchar('\n');
	return (0);
}
