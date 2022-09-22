#include "main.h"

/**
 * print_square - print square
 * @size: size is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;
	int c;

	c = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(35);
		_putchar(10);
		c++;
	}
	if (!c)
		_putchar(10);
}
