#include "main.h"

/**
 * main - Entry point
 *
 * Prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet()
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
	return (0);
}
