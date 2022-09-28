#include "main.h"
/**
 * print_diagsums - print sum of two diagonals
 * @a: square matrix
 * @size: column size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1, diag2;

	diag1 = diag2 = i = 0;
	while (i < size)
	{
		diag1 += a[i * (size + 1)];
		diag2 += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, %d\n", diag1, diag2);
}
