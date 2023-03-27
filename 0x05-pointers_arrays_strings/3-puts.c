#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 * Return: the length of the string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
