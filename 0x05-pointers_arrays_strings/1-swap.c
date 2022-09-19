#include "main.h"

/**
 * swap_int - swap give integers
 * @a: first int pointer
 * @b: second int pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
