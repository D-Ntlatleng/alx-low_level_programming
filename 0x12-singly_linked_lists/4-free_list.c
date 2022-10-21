#include "lists.h"

/**
 * free_list- function to free linked list
 * @head: list to free
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
