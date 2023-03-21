#include "main.h"

/**
 * print_last_digit - prints last digit
 * @i: parameter to be checked
 * Return: m
 */

int print_last_digit(int i)
{
int m;

m = i % 10;
if (i < 0)
m = -m;
_putchar(m + '0');
return (m);
}
