#include <stdio.h>
#include "main.h"
/**
 * main - points all arguments it receives
 * @argc: argument count
 * @argv: argument array
 * return: 0 succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
