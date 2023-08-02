#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: pointer to the first element of the list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;

		return (1);
	}

	current_node = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current_node->next == NULL)
			return (-1);

		current_node = current_node->next;
	}

	next_node = current_node->next;
	current_node->next = next_node->next;
	free(next_node);

	return (1);
}
