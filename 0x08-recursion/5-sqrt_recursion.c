#include "main.h"
/**
 * find_root - finds the square root of a number
 *
 * @n: number to find the square root of
 * @i: iterator
 *
 * Return: the square root of n
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_root(n, i + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number
*
* @n: number to find the square root of
*
* Return: the sqaure root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (find_root(n, 1));
}
