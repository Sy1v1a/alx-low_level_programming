#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - a func to free list
 * @head: first pointer
 *
 * return: memory
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cn = head;
	dlistint_t *next;

	while (cn != NULL)
	{
		next = cn->next;
		free(cn);
		cn = next;
	}
}
