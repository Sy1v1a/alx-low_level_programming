#include "main.h"
/**
 * binary_to_unit - a function that converts a binary number to an unsigned int
 * @b: pointer to string 0 and 1
 * return: converted number or 0 if b is not 0, 1, NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int j = 0;
	
if (!b)
	return (0);

for (j = 0; b[j]; j++)
{
	if (b[j] > '1' || b[j] < '0')
		return (0);
	unit = (b[j]- '0') + unit * 2;

}
return (unit);
}
