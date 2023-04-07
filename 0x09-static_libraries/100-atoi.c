#include "main.h"

/**
 * _atoi-convert a string into an int
 * @s: input
 * Return: result
 */

int _atoi(char *s)
{
	int sg = 1;
	int i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sg *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sg;
	return (res);
}
