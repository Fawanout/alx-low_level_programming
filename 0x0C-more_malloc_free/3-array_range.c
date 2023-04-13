#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: min int
 * @max: max int
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int i, lg, *p;

	if (min > max)
		return (NULL);
	lg = max - min + 1;
	p = malloc(sizeof(int) * lg);
	if (!p)
		return (NULL);
	for (i = 0; i < lg; i++)
		p[i] = min++;
	return (p);
}
