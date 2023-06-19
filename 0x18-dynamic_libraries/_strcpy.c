#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int e = 0;
	int x = 0;

	while (*(src + e) != '\0')
	{
		e++;
	}
	for ( ; x < e ; x++)
	{
		dest[x] = src[x];
	}
	dest[e] = '\0';
	return (dest);
}
