#include "main.h"

/**
 * print_square - prints squares
 * @size: input
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
		else
		{
			for (row = 0; row < size; row++)
			{
				for (column = 0; column < size; column++)
				{
					_putchar(35);
				}
				_putchar('\n');
			}
		}
}
