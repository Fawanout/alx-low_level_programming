#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: char input
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size--)
		i[size--] = i;
	return (i);
}
