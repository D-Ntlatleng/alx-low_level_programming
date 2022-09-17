#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *@n: number of times _ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int c;

	c = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
		c++;
	}
	if (!c)
		_putchar(10);
}
