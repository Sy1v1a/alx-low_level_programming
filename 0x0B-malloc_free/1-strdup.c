#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - points to new string which is the duplicate string
 * @str: character
 * return: a pointer to the duplicate string,
 * NULL for insignificant memory
 */
char *_strdup(char *str)
{
char *dup;
int m, n = 0;
if (str == NULL)
return (NULL);
m = 0;
while (str[m] != '\0')
	m++;
dup = malloc(sizeof(char) * (m + 1));
if (dup == NULL)
return (NULL);
for (n = 0; str[n]; n++)
dup[n] = str[n];
return (dup);
}
