#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int c;

	c = 0;
	for (i = 0; i < size; i++)
	{
		j = 0;
		for (; j < size - i - 1; j++)
			_putchar(32);
		for (; j < size; j++)
			_putchar(35);
		_putchar(10);
		c++;
	}
	if (!c)
		_putchar(10);
}
