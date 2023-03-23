#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: input
 */

void print_diagonal(int n)
{
	int dgnl, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dgnl = 1; dgnl <= n; dgnl++)
		{
			for (space = 1; space <= dgnl; space++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
}

