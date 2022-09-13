#include "main.c"
/**
 * print_alphabet - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar(10);
}
