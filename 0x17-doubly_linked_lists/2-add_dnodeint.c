#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - a func that adds new node at beginning of list
 * @head: first node
 * @n: node data
 *
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
	{
		return (NULL);
	}
	nn->n = n;
	nn->prev = NULL;
	if (*head == NULL)
	{
		nn->next = NULL;
	}
	else
	{
		nn->next = *head;
		(*head)->prev = nn;
	}
	*head = nn;
	return (nn);
}
