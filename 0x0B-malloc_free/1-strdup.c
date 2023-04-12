#include "main.h"

/**
 * *_strdup - returns a pointer to  a newly allocated space in memory
 * @str: string
 * Return: 0 success
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	s = malloc(size * sizeof(*str) + 1);

	if (s == 0)
		return (NULL);
	else if
	{
		for (; i < size; i++)
			s[i] = str[i];
	}
	return (s);
}
