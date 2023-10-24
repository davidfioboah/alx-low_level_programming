#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	new_nodes = malloc(sizeof(listint_t));
	if (new_nodes != NULL)
	{
		new_nodes->n = n;
		new_nodes->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_nodes->next = *head;
	*head = new_nodes;
	return (new_nodes);
}
