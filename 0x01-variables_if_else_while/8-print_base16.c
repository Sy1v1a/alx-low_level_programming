#include <stdio.h>

/**
 * main - Print all number of base 16 in lowercase
 *
 * return: always 0 (success)
 */
int main(void)
{
int i;
for (i = 48; i < 50; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
