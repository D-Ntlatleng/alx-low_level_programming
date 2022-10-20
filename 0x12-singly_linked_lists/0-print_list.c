#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list_t to print
 *
 * Return: 0 or positive number
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr = h;

	if (ptr)
	{
		while (ptr != NULL)
		{
			if (ptr->str)
				printf("[%d] %s\n", ptr->len, ptr->str);
			else
				printf("[0] (nil)\n");
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
