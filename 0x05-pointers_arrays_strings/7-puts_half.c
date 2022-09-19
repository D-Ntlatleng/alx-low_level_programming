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
	int j;

	i = 0;
	n = 0;
	j = 0;
	while (str[i])
		i++;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;
	j = i - n;
	while (str[j])
		_putchar(str[j++]);
	_putchar(10);
}
