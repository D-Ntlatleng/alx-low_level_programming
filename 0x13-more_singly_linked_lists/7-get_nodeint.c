#include "lists.h"
/**
 * get_nodeint_at_index - function that returns nth node
 * @head: list to search
 * @index: node number to return
 *
 * Return: NULL or node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head)
	{
		i = 0;
		while (head)
		{
			ptr = head;
			head = head->next;
			if (i == index)
				return (ptr);
			i++;
		}
	}
	return (NULL);
}
