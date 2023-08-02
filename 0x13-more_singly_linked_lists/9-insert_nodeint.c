#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first element of the list.
 * @idx: index of the list where the new node should be added.
 * @n: data to be added in the new node.
 *
 * Return: pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current_node, *new_node;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(*new_node));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current_node = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current_node == NULL)
			return (NULL);

		current_node = current_node->next;
	}

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
