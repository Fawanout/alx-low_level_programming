#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: returns a pointer to space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_lg, s2_lg;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_lg = 0; s1[s1_lg] != '\0'; s1_lg++)
		;
	for (s2_lg = 0; s2[s2_lg] != '\0'; s2_lg++)
		;
	c = malloc(s1_lg + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		c[i] = s2[j];
		i++;
	}
	c[i] = '\0';
	return (c);
}
