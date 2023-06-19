#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;
	for(;i < j; i++)
	{
		dest[i] = src[j];
		n--;
	}
	return(dest);
}
