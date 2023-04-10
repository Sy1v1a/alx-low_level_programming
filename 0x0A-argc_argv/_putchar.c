#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to standard output
 * @c: the character to print
 * Return: 1 on success -1 on error errno is set appriopriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
