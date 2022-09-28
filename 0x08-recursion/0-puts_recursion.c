#include "main.h"

/**
 * _puts_recursion - prints a string follwed by a new line
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar(10);
}
