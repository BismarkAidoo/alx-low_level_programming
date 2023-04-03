#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: paramter for haystack
 * @needle: paramter for needle
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int num;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		num = 0;

		if (haystack[num] == needle[num])
		{
			do {
				if (needle[num + 1] == '\0')
					return (haystack);

				num++;

			} while (haystack[num] == needle[num]);
		}

		haystack++;
	}

	return ('\0');
}
