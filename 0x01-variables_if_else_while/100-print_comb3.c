#include <stdio.h>

/**
 * main - print all possible differnt combinations.
 *
 * return: always 0 (success)
 */
int main(void)
{
int n, m;
for (n = 48; n <= 56; n++)
{
for (n = 49; m <= 57; n++)
{
if (m > n)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(' ');
putchar(',');
}
}
}
}
putchar('\n');
return (0);
}
