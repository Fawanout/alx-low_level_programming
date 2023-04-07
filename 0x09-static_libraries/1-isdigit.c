#include "main.h"

/**
 * _isdigit - checks for digit
 * @c:input
 * Return: 1 if it's digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
