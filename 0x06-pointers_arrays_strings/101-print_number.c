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
	char *s;

	if (n == INT_MIN)
	{
		s = "-2147483648";
		while (*s)
			_putchar(*s++);
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 10)
		print_number(n / 10);
	_putchar(n % 10 + 48);
}
