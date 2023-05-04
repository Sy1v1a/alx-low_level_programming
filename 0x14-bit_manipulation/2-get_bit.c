#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index
 * @n: input to index
 * @index: index of the bit
 * return: value of index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
	return (-1);
}
return ((n >> index) & 1);
}
