#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to reverse
 * return: 1 if it is palindrome, o if not
 */
int is_palindrome(char *s)
{
if(*s == 0)
	return(1);
return(check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string length
 * return: string length
 */
int _strlen_recursion(char *s)
{
	if(*s == '\0')
		return(0);
	return(1 + _strlen_recursion(s + 1));
}
/*
 * check_pal -check character for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 * return: 1 if palindrome, o if not
 */
int check_pal(char *s, int i, int len)
{
	if(*(s + i) != *(s + len - 1))
		return(0);
	if(i >= len)
		return(1);
	return(check_pal(s, i + 1, len - 1));
}
