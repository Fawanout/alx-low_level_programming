#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 * Return: always (a)
 * @a: parameter to be checked
*/
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}