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
	int j;

	j = 0;
	i = n % 10;
	j = i > 0 ? i : i * -1;
	_putchar(j + 48);
	return (j);
}
