#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: input
 * @r: input
 * Return: result
 */
int square(int n, int r);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
			return (square(n, 0));
}
/**
 * square - cheks for natural square root
 * @n: input
 * @r: input
 * Return: value
 */
int square(int n, int r)
{
if (r * r > n)
return (-1);
if (r * r == n)
return (r);
return (square(n, r + 1));
}

