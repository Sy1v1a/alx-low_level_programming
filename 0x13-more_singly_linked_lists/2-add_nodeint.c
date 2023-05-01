#include "lists.h"
/*
 * listint-t _ adds a new node
 * @n: int value
 * return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;
	newn =(listint_t *) malloc(sizeof(listint_t));
	newn->n =n;
	newn->next =*head;
	*head = newn;
	return (newn);
}
