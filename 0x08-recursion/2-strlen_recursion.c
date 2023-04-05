#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string to be measured
 *return: length of string
*/
int _strlen_recursion(char *s)
{
	int length = 0;
	if(*s)
	{
		length++;
		length += _strlen_recursions(s + 1);
	}
	return (length);
}
