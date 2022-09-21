#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < n - 1)
	{
		j = a[i];
		a[i++] = a[n - 1];
		a[n-- - 1] = j;
	}
}
