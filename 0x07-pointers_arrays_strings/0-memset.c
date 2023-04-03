#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: parameter for the array
 * @b: parameter for the values in the array
 * @n: parameter for the number of times to print the new values
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
