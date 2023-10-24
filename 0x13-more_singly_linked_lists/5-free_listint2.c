#include "lists.h"
/**
 * free_listint2 - function that frees the linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temps;

if (head == NULL)
return;

while (*head)
{
temps = *head;
*head = (*head)->next;
free(temps);
}
head = NULL;
}
