#include "main.h"
<<<<<<< HEAD
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
=======

/**
 * a function that prints 10x the alphabet
 */
void print_alphabet_x10(void);
{
char ch;
int i;
i = 0
while(i < 10)
{
ch = 'a';
while(ch <= 'z')
>>>>>>> bc2aa17dd838056443b435f14976a617a3401751
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
