#include "main.h"
/**
 * int_strlen - returns the length of string
 * @s: string
 * return: length
 */
int _strlen(char *s)
{
int l = 0;
while (*s[l] != '\0')
{
l++;
}
return (l);
}
