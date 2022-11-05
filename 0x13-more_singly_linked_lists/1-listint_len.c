#include "lists.h"
/**
 * listint_len - function that return the number of elements in a linked list
 * @h: list to count from
 *
 * Return: 0 or positive number
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

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
