#include "lists.h"
/**
 *add_node- adds a new node as the 1st node.
 * @head: ptr to a ptr to list_t
 * @str: str
 * Return: the addr of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->str = strdup(str);
		if (newNode->str == NULL)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = strlen(str);
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
