#include <stdio.h>

/**
 * main - is the main function
 * Return: must be  0 (succes)
*/
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
