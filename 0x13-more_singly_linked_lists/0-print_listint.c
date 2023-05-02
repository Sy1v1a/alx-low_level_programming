#include <stdio.h>
#include "lists.h"
/*
 * print_listint - prints all element of listint_t list
 * @h: variable
 * return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nn = 0;
	while (h != NULL)
{
	printf("%d\n", h->n);
	nn++;
	h = h->next;
}
return (nn);
}
