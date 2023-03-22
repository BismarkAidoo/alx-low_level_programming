#include "main.h"

/**
 * main - Entry point
 *
 * _islower - function to print lowercase
 * c: parameter to be printed
 * Return: 1 if it is a lower case
 * and 0 therwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else 
		return (0);
}
