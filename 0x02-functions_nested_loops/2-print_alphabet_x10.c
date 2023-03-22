#include "main.h"

/**
 * main - Entry point
 *
 * Prints lowercase alphabet 10x
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
 
	for (i = 0; i < 10; i++)

	{
		char alphabet;
			
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}	
	return (0);
}
