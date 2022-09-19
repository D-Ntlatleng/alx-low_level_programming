#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
		i++;
	if (i % 3 == 0 && i != 0)
		n = (i - 1) / 2;
	else
		n = i / 2;
	while (str[n])
		_putchar(str[n++]);
	_putchar(10);
}
