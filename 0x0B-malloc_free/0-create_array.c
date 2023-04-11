#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of char and
 * initialize it to a specific char
 * @size: size of array
 * @c: char to initialize
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
