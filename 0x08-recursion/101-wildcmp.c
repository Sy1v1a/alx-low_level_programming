#include "main.h"
/**
 * wildcmp - compares string
 * @s1: points to string
 * @s2: points to strind
 * return:0
 */
int wildcmp(char *s1, char *s2)
{
	if(*s1 =='\0')
	{
		if(*s2 != '\0' && *s2 == '*')
		{
			return(wildcmp(s1, s2 +1));
		}
		return(*s2 =='\0');
	}
	if(*s2 == '*')
	{
		return(wildcmp(s1 +1, s2) || wildcmp(s1, s2 +1));
	}
	else if(*s1 == *s2)
	{
		return(wildcmp(s1 + 1, s2 +1));
	}
	return(0);
}
