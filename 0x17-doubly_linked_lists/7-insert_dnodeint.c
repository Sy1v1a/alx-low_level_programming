#include <stdlib.h>
#include "lists.h"
dlistint_t *new_dnodeint(int i);
/**
 * new_dnodeint - helper func to create new node
 * @i: data
 *
 * Return: NULL if fail
 */
dlistint_t *new_dnodeint(int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->prev = NULL;
	nn->next = NULL;
	return (nn);
}

dlistint_t *new_dnodeint(int i);
/**
 * insert_dnodrint_at_index - add node at nth point
 * @h: first pointer
 * @idx: position
 * @n: data
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		dlistint_t *cn = *h;
		dlistint_t *nn = new_dnodeint(n);
		unsigned int j = 0;

		if (nn == NULL)
			return (NULL);
		nn->next = *h;
		if (*h != NULL)
			(*h)->prev = nn;
		*h = nn;
		return (nn);
	}

	while (cn != NULL && j < idx - 1)
	{
		cn = cn->next;
		j++;
	}

	if (cn != NULL || cn->next == NULL)
		return (NULL);

	if (nn == NULL)
		return (NULL);

	nn->prev = cn;
	nn->next = cn->next;
	cn->next->prev = nn;
	cn->next = nn;
	return (nn);
}
