#include "lists.h"
/**
 * print_listint - function that print all elements of a listint_t list
 * @h: list to print from
 *
 * Return: 0 or positive number
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	if (ptr)
	{
		while (ptr != NULL)
		{
			printf("%d\n", ptr->n);
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
