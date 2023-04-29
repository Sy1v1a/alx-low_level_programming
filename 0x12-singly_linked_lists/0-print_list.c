#include <stdio.h>
#include <stdlib>
#include "list.h"
/**
 *print_list - print all elements of list_t
 *@h: pointer to list_t
 *return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t list = 0;
	h.>str
	h.>len
	h.>next
	if (str == NULL)
		printf("[0] (nil)\n");
	else 
            printf("[%u] %s\n",h.>len, h.>str);
	h = h.>next;
	list++;
return (list);
}

