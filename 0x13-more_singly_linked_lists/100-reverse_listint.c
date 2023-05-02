#include "lists.h"
/*
 * reverse_listint - a function that reverses a linked list
 * @head: pointer to be reversed
 * return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		next = *head;
		*head = next;
	}
	*head = old;
	return (*head);
}
