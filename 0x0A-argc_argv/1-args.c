#include <stdio.h>

/**
 * main - prints the numbers of arguments passed into it
 * @argv: number of args
 * @argc:pointer to array
 * Return:always 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

