#include "main.h"

/**
 *print_last_digit - function that prints last digit
 *
 *@p: function parameter
 *
 * Return: r
 */

int print_last_digit(int r)
{
	int q;

	q = r % 10;

	if (r < 10)
		q = -q;

	_putchar(q + '0');
	return (q);
}
