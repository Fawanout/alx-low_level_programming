#include "main.h"

/**
 * _strlen - finds the length of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0' ; size++)
		;
	return (size);
}

/**
 *  *str_concat - concatenates two strings
 *  @s1: input
 *  @s2: input
 *  Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *a;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	a = malloc((size1 + size2) * sizeof(char) + 1);
	if (a == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			a[i] = s1[i];
		else
			a[i] = s2[i - size1];
	}
	a[i] = '\0';
	return (a);
}
