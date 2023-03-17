#include <stdio.h>

/**
 * main - Print the alphabets.
 *
 * return: always 0 (success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int c;
for (c = 0; c < 52; c++)
{
putchar(alp[c]);
}
putchar('\n');
return (0);
}
