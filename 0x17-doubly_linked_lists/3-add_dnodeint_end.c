#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_dnodeint_end - a func that adds new node at end
 * @head: first pointer 
 * @n: data
 * return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
	{
		return (NULL);
	}

	nn->n = n;
	nn->next = NULL;
	if (*head == NULL)
	{
		nn->prev = NULL;
		*head = nn;
	}
	else
	{
		dlistint_t *cn = (*head);
		while (cn->next != NULL)
		{
			cn = cn->next;
		}
		cn->next = nn;
		nn->prev = cn;
	}
	return (nn);
}
