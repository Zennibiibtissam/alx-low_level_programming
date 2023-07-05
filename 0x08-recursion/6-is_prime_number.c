#include "main.h"
/**
* factor - finds the prime number of a given number
*
* @n: number to find the prime number of
* @i: number to check if prime
*
* Return: (1) if prime number, (0) if not
*/
int factor(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (factor(n, i + 1));
}
/**
* is_prime_number - finds the prime number of a given number
*
* @n: number to find the prime number of
*
* Return: value from factor function
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (factor(n, 2));
}
