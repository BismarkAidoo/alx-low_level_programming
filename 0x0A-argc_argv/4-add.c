#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int numb, digit, sum = 0;

	for (numb = 1; numb < argc; numb++)
	{
		for (digit = 0; argv[numb][digit]; digit++)
		{
			if (argv[numb][digit] < '0' || argv[numb][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[numb]);
	}

	printf("%d\n", sum);

	return (0);
}
