#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: returns a pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *pp = needle;

		while (*p == *pp && *pp != '\0')
		{
			p++;
			pp++;
		}
		if (*pp == '\0')
			return (haystack);
	}
	return (0);
}
