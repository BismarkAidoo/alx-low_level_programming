#include <stdio.h>

/**
 * main - Entry point
 * Prints the numbers from 1 to 100
 * but for multiples of three prints fizz
 * and for multiples of five prints Buzz
 * and prints FizzBuzz for multiples of both three and five
 * Return: 0
 */

int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FizzBuzz ");
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (h % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", h);
	h++;
	}
return (0);
}
