#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * @index: value of nth node
 * @head: pointer to first node
 * return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int g = 0;
if (!node)
       return (NULL);

while (node && g < index)
{
	node = node->next;
	g++;
}
return (node);
}
