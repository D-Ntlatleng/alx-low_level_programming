#include "lists.h"

/**
 * pop_listint - function to delete first elememnt in the linked list
 * @head: list to delete
 *
 * Return: 0 or some number
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head && *head)
	{
		ptr = *head;
		*head = (*head)->next;
		n = ptr->n;
		free(ptr);
		return (n);
	}
	return (0);
}
