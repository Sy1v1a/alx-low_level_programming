#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes char c to  standard output
 * @c: character to print
 * return: 1 on success -1 on error, and errno is set appropriately
 */
{
	return (write(1, &c, 1));
}
