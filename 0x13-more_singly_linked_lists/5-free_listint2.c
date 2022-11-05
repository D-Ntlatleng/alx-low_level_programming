#include "lists.h"

/**
 * free_listint2 - function to free linked list
 * @head: list to free
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
