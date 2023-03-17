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

	printf("Size of a char: %u byte(s)\n", (unsigned char)sizeof(u));
	printf("Size of int: %u byte(s)\n", (unsigned int)sizeof(v));
	printf("Size 0f long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of long long int: %llu byte(s)\n", (unsigned long long)sizeof(x));
	printf("Size of float: %f byte(s)\n", (float)sizeof(y));
	return (0);

}
