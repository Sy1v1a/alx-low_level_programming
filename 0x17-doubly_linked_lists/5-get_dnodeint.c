#include "lists.h"
/**
 * get_dnodeint_at_index - a func to return the nth node
 * @head: first pointer
 * @index: number of nodes
 *
 * return: NULL if node doest exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cn = head;

	while (cn != NULL && index > 0)
	{
		cn = cn->next;
		index--;
	}
	return (cn);
}
