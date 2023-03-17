#include <stdio.h>

 /**
  * main - Print lowercase alphabet in reverse.
  *
  * return: always 0 (success)
  */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
