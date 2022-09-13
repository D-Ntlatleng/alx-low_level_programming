#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (str[j])
			_putchar(str[j++]);
		_putchar(10);
	}
}
