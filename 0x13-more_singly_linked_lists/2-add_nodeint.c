#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: head node of the list
 * @n: int to add
 *
 * Return: list_t or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr != NULL)
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
