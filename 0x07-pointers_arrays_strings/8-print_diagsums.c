#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 */

void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);


}

