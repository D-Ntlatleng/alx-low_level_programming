#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: 2d array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			_putchar(a[i][j++]);
		_putchar(10);
		i++;
	}
}
