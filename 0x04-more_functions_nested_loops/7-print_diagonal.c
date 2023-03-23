#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: input
 */

void print_diagonal(int n)
{
	int dgnl, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dgnl = 0; dgnl < n; dgnl++)
		{
			for (space = 0; space < dgnl; space++)
			{
			_putchar(32);
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}

