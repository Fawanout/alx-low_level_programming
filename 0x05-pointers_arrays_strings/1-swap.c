#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first input
 * @b: second input
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
