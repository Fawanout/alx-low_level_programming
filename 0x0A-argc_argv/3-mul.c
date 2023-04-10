#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv:number of args
 * @argc:pointer to array
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int pr;

	if (argc == 3)
	{
		pr = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", pr);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

