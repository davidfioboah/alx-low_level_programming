#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end, *current_node;
	size_t n;

	new_node_end = malloc(sizeof(list_t));
	if (new_node_end == NULL)
		return (NULL);

	new_node_end->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node_end->len = n;
	new_node_end->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node_end;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node_end;
	}

	return (*head);
}
