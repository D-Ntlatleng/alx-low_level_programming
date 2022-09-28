#include "main.h"

/**
 * _puts_recursion - prints a string follwed by a new line
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
