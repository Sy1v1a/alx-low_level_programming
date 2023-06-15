#include "lists.h"
/**
 * sum_dlistint - sum list
 * @head: first pointer
 *
 * Return: 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	int addi = 0;
	dlistint_t *cn = head;

	while (cn != NULL)
	{
		addi += cn->n;
		cn = cn->next;
	}
	return (addi);
}
