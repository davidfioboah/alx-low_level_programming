#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodes;
	listint_t *cursor = *head;

	new_nodes = malloc(sizeof(listint_t));
	if (new_nodes != NULL)
	{
		new_nodes->n = n;
		new_nodes->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_nodes;
	}
	else
		*head = new_nodes;
	return (new_nodes);
}
