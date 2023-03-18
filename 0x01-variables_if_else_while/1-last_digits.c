#include <stdlib.h>
#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 *This program will assign a random number to
 *the variable n each time it is executed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d is greater than 5", n);
	else if (n == 0)
		printf("%d is equal to 0", n);
	else if (n < 6)
		printf("%d is less than 6 and not 0", n);
	printf("\n");
	return (0);
}
