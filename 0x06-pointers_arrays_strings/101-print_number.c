#include "main.h"
#include <limits.h>
/**
 * print_number - print out number
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;
	if (i > 10)
		print_number(i / 10);
	_putchar(i % 10 + 48);
}
