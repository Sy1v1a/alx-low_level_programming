#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at nth
 * @head: first pointer
 * @index: position
 *
 * return: i on success -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cn = *head;
	unsigned int i =0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cn);
		return (1);
	}
	while (cn != NULL && i < index)
	{
		cn = cn->next;
		i++;
	}
	if (cn == NULL)
		return (-1);
	if (cn->prev != NULL)
		cn->prev->next = cn->next;
	if (cn->next != NULL)
		cn->next->prev = cn->prev;

	free(cn);
	return (1);
}
