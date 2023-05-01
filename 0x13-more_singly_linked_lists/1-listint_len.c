#include "lists.h"
/*
 * listint_len - number of element in listint_t
 * @h: variable
 * return: number of elements 
 */
size_t listint_len(const listint_t *h)
{
	size_t ln = 0;
	while (h)
	{
		ln++;
		h = h->next;
	}
	return (ln);
}
		
