#include "lists.h"

/**
 * add_nodeint_end - function that add node at the end of list
 * @head: head node of list_t
 * @n: integer to add
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *last;

	if (ptr)
	{
		ptr->n = n;
		ptr->next = NULL;
		if (*head == NULL)
			*head = ptr;
		else
		{
			last = *head;
			while (last->next != NULL)
			{
				last = last->next;
			}
			last->next = ptr;
		}
	}
	return (ptr);
}
