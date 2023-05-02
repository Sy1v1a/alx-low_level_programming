#include "lists.h"
/**
 * free-listint2 - a function that frees list
 * @head: pointer to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL)
	
	while (*head)
	{
		freed = (*head)->next;
		free(*head);
		*head = freed;
	}
	*head = NULL;
}
