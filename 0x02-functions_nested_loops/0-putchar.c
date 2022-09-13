#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char str[] = "_putchar";

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar(10);
	return (0);
}
