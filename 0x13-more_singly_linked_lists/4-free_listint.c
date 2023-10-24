#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: list head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temps;

	while (head != NULL)
	{
		temps = head;
		head = head->next;
		free(temps);
	}
}
