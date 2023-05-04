#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to index
 * @index: index set to 1
 * return: 1 on success -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
{
	return (-1);
}
*n |= (1UL << index);
return (1);
}
