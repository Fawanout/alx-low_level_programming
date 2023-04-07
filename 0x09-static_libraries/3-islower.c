#include "main.h"

/**
 * _islower - function that checks for lower chars
 *
 * @c: parametre to be printed
 *
 * Return: is (0)
 *
 * otherwise (1)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
