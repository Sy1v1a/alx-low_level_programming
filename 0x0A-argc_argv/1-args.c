#include <stdio.h>
#include "main.h"
/**
 * main - print the nunmber of arguments passed into it
 * @argc: argument count
 * @argv: argument array
 * return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc -1);
	return (0);
}
