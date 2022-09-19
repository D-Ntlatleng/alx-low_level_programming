#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer to string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *i;

	i = s;
	while (*s)
		s++;
	while (--s >= i)
		_putchar(*s);
	_putchar(10);
}
