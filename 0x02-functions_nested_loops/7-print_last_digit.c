#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n *= -1;
	i = n % 10;
	_putchar(i + 48);
	return (i);
}
