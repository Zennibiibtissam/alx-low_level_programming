#include "main.h"
/**
* print_number - prints an integer
*
* @n : int
*
* Return: Always 0 (Success)
*/
void print_number(int n)
{
	unsigned int bet = n;

	if (n < 0)
	{

		_putchar(45);
		bet = -n;
	}
	if (bet / 10)
	{
		print_number(bet / 10);
	}
	_putchar(bet % 10 + '0');
}
