#include "lists.h"
/**
 * free_listint - a function to free a list
 * @head: pointer to free
 */
void free_listint(listint_t *head)
{
	listint_t *freee;

	while (head)
	{
		head = freee;
		freee = head->next;
		free(head);
	}
}
