#include <stdio.h>
#include "main.h"
/**
 * main - pnts all arguments it receives
 * @argc: argument count
 * @argv: argument array
 * return: 0
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
