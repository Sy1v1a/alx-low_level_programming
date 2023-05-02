#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node at a given position
 * @idx: new node should be inserted here
 * @head: pointer to add new node
 * @n: new node
 * return: null or new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *insert;
	listint_t *newn = *head;

	insert = malloc(sizeof(listint_t));
	if (!insert || !head)
	return (NULL);
	insert->n = n;
	insert->next = NULL;

if (idx == 0)
{
insert->next = *head;
*head = insert;
return (insert);
}
for (x = 0; newn && x < idx; x++)
{
	if (x == idx - 1)
	{
		insert->next = newn->next;
		newn->next = insert;
		return (insert);
	}
	else
	newn = newn->next;
}
return (NULL);
}
