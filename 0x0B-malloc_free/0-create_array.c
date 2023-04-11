#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of size and assign to char c
 * @size: size of array
 * @c: char to assign
 * description: he _strdup() function returns a pointer to a new
 * string which is a duplicate of the string str
 * return: a pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
char *air;
unsigned int x;
air = malloc(sizeof(char) * size);
if (size == 0 || air == NULL)
	return (NULL);
for (x = 0; x < size; x++)
	air[x] = c;
return (air);
}
