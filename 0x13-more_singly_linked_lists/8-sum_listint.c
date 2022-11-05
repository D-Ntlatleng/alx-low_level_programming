#include "lists.h"
/**
 * sum_listint - function that return th sum of all the data (n) in the list
 * @head: list to traverse
 *
 * Return: 0 or some number
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head)
	{
		while (head)
		{
			ptr = head;
			head = head->next;
			sum += ptr->n;
		}
	}
	return (sum);
}
