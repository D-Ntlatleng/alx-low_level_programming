#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning
 * @head: head node of the list
 * @str: string
 *
 * Return: list_t or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (ptr != NULL)
	{
		ptr->str = strdup(str);
		if (str)
		{
			while (str[i])
				i++;
		}
		ptr->len = i;
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
