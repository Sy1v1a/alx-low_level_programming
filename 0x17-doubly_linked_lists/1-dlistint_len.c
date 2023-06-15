#include <stddef.h>
#include "lists.h"
/**
 * dlistint_len - a function that returns the nuner of element in list
 * @h: pointer to node
 *
 * return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
