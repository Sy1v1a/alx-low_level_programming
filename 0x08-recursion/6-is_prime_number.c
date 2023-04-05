#include "main.h"
/**
 * is_prime_number - is integer a prime number or not 
 * @n: number to evaluate
 * return: 1 for prime number 0 for not
 */int is_prime_number(int n)
{
	if(n <= 1)
		return(0);
	return(is_prime_number(n, n - 1));
}
