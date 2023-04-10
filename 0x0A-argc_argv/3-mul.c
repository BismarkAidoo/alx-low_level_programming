#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int numb1, numb2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	product = numb1 * numb2;

	printf("%d\n", product);

	return (0);
}
