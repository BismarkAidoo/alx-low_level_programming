#include "main.h"

/**
 * times_table - a function that prints 9 times table,
 * starting with 0.
 * Return: Always 0
 */

void times_table(void)
{
	int a;

	for (a = 0; a <= 10; a++)
	{
		int result = a * 9;

		if (result < 10)
		{
			_putchar(result + '0');
		}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
		return (0);
	}
}
