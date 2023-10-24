#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temps;
int n;

temps = *head;

if (temps == NULL)
return (0);

*head = temps->next;
n = temps->n;
free(temps);
return (n);
}
