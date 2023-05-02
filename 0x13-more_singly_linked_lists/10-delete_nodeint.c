#include "lists.h"
/*
 * delete-nodeint_at_index - a function to delete node at index
 * @index: node to be deleted
 * @head: points to list 
 * return; 1 on success -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *newn = *head;
	listint_t *delete = NULL;

if (*head == NULL)
	return (-1);

if (index == 0)
{
	*head = (*head)->next;
	free(newn);
	return (1);
}
while (x < index - 1)
{
	if (!newn || !(newn->next))
	return (-1);
	newn = newn->next;
	x++;
}
	delete = newn->next;
	newn->next = delete->next;
	free(delete);
	return (1);
}
