#include "lists.h"
/*
 * add_nodeint_end - new node at the end of list
 * @n: new node
 * @head: pointer to first nod
 * return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newn;
listint_t *end = *head;

newn = malloc(sizeof(listint_t));
newn->n = n;
newn->next = NULL;

if (*head == NULL)
{
	*head = newn;
	return (newn);
}
while (end->next != NULL)
	end = end->next;
end->next = newn;
return (newn);
}
