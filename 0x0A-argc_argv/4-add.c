#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive nums
 * @argc: mun of args
 * @argv: pointer of arrays
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int sm = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
			if (*ch < '0' || *ch > '9')
				return (printf("Error\n"), 1);
		sm += atoi(argv[argc]);
	}
	printf("%d\n", sm);
	return (0);
}

