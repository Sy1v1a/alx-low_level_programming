#include "lists.h"
/**
 * pop_listint - a function to delete head node
 * @head: pointer to delete
 * return: 0 if list is empty or the deleted list
 */
int pop_listint(listint_t **head)
{
	int pop;
	listint_t *del;

	if (!*head || !head)
		return (0);
	del = (*head)->next;
	pop = (*head)->n;
	*head = del;
	free(*head);

	return (pop);
}
