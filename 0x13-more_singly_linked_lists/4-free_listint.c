#include "lists.h"
/**
 * free_listint - a function to free a list
 * @head: pointer to free
 * return: free list
 */
void free_listint(listint_t *head)
{
	listint_t *free = *head;

	while (head)
	{
		free = head->next;
		free(head);
	}
}

