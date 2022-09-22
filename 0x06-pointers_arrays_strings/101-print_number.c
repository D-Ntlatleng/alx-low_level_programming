#include "main.h"

/**
 * print_number - print out number
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	long i;

	i = (long)n;
	if (i < 0)
	{
		_putchar('-');
		i *= -1;
	}
	if (i > 10)
		print_number(i / 10);
	_putchar(i % 10 + 48);
}
