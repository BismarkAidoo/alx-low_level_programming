#include "main.h"

/**
 *print_last_digit - function that prints last digit
 *
 *@p: function parameter
 *
 * Return: q
 */

int print_last_digit(int p)
{
	int q;

	q = p % 10;

	if (p < 10)
		q = -q;
	return (q);
}
