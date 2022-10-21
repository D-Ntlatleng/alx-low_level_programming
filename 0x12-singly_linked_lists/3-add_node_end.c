#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that add node at the end of list
 * @head: head node of list_t
 * @str: string
 *
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *last;
	unsigned int i = 0;

	if (ptr)
	{
		ptr->str = strdup(str);
		if (str)
		{
			while (str[i])
				i++;
		}
		ptr->len = i;
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
