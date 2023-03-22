#include "main.h"

/**
 * _abs - function that hecks for absolute value
 * @a: parameer to be checked
 * Return: Always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);

	else if (a >= 0)
		a = a;

	return (a);
}
