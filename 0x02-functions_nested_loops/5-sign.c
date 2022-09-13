#include "main.h"

/**
 * print_sign - check lower case
 * @n: check sign
 *
 * Description: 'the program's description'
 *
 * Return: 1 (success) and 0 (failed)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
