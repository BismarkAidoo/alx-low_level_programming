#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int length;
	unsigned int bytes = 0;

	while (*s)
	{
		for (length = 0; accept[length]; length++)
		{
			if (*s == accept[length])
			{
				bytes++;
				break;
			}

			else if (accept[length + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
