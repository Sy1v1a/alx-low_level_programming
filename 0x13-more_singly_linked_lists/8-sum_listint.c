#include "lists.h"
/**
 * sum_listint - a function that sums the lis
 * @head: pointer to sum
 * return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *addall = head;
if (!addall)
	return (0);
while (addall)
{
	s += addall->n;
	addall = addall->next;
}
return (s);
}
