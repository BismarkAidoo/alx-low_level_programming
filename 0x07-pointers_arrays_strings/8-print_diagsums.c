#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int smatrix, sum1 = 0, sum2 = 0;

	for (smatrix = 0; smatrix < size; smatrix++)
	{
		sum1 += a[smatrix];
		a += size;
	}

	a -= size;

	for (smatrix = 0; smatrix < size; smatrix++)
	{
		sum2 += a[smatrix];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
