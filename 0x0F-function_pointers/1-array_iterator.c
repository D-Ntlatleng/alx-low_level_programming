#include "function_pointers.h"
/**
 * array_iterator - function that executes an action
 * @array: int array to iterate
 * @size: size of array
 * @action: function to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
