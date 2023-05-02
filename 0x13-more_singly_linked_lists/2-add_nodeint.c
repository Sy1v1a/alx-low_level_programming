#include "lists.h"
/*
 * add_nodeint _ adds a new node
 * @n: new node
 * @head: first node
 * return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = (listint_t *) malloc(sizeof(listint_t));
	newn->n = n;
	newn->next = *head;
	*head = newn;
	return (newn);
}
