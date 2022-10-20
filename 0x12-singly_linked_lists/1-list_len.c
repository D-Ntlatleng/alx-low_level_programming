#include "lists.h"

/**
 * list_len - function that count number of elements in a linked list_t
 * @h: list_t to count elements of
 *
 * Return: 0 or positive number
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

	if (ptr)
	{
		while (ptr != NULL)
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
