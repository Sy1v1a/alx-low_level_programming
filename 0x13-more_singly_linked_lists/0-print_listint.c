#include <stdio.h>
#include "lists.h"
/*
 * print_listint - prints all element of listint_t
 * @h: variable
 * return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
while (h != NULL)
{
	printf("%d", h->n);
	h = h->next;
}
}
