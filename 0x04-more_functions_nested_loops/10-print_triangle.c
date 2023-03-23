#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: input
 */

void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((h + b) <= size)
					_putchar(32);
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

