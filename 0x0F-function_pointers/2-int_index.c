#include "function_pointers.h"
/**
 * int_index - find index that is correct
 * @array: array to search
 * @size: number of elements in an array
 * @cmp: function to compare values with
 *
 * Return: -1 if fails or other number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);

		}
	}
	return (-1);
}
