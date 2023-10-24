#include "lists.h"

/**
 * listint_len - gives the number of nodes in a linked list
 * @h: list head
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t counts = 0;

	while (cursor != NULL)
	{
		counts = counts + 1;
		cursor = cursor->next;
	}
	return (counts);
}
