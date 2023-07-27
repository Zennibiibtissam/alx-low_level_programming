#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a pointer to the new node or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *curr = *head;

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (!*head)
		*head = newNode;
	else
	{
		while (curr->next)
			curr = curr->next;
		curr->next = newNode;
	}
	return (newNode);
}
