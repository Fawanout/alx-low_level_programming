#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with constant byte
 * @s: pointer
 * @b: constant
 * @n: number of bytes
 * Return: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}

/**
 * *_calloc - allocates memory fo any array
 * @nmemb: array lenght
 * @size: size of elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
