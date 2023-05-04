#include "main.h"
/**
 * flip_bits -  a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int num = 0;
unsigned long int i = n ^ m;

while (i)
{
	num += i & 1;
	i >>= 1;
}
return (num);
}
