#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number
 * of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument array
 * Return: 0, 1 on Error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
result = 0;
if (num1 < 0)
{
printf("0\n");
return (0);
}
for (num2 = 0; num2 < 5 && num1 >= 0; num2++)
{
while (num1 >= coins[num2])
{
result++;
num1 -= coins[num2];
}
}
printf("%d\n", result);
return (0);
}
