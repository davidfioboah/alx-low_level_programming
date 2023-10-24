#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: list head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t counts = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		counts = counts + 1;
		cursor = cursor->next;
	}
	return (counts);
}
