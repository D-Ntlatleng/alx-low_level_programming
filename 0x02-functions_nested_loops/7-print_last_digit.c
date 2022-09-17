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

	i = n % 10;
	return (i > 0 ? i : i * -1);
}
