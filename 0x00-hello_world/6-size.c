#include <stdio.h>

/**
 * main - Print the size of various data type in C
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char u;
	int v;
	long int w;
	long long int x;
	float y;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size 0f long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(y));
	return (0);

}
