#include "main.h"

/**
 * is_prime_number - checks if the input is prime num
 * @n: input
 * Return: return 1 if input int is a prime num, else 0
 */
int check_prime(int n, int g);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks all the factors of n
 * @n: input
 * @g: input
 * Return: value
 */

int check_prime(int n, int g)
{
	if (g >= n && n > 1)
		return (1);
	else if (n % g == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, g + 1));
}
