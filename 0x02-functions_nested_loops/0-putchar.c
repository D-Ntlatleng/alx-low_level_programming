#include <stdio.h>
#include "main.h"

/**
 * main- writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar(10);
	return (0);
}
