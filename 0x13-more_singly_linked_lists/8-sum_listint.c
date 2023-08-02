#include "lists.h"

/**
 * sum_listint - returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: pointer to the first element of the list.
 *
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current_node;

	if (head == NULL)
		return (0);

	current_node = head;
	sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
