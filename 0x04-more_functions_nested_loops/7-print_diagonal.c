#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
*
* @n: number of times the character \ should be printed
*
* Return: VOID
*/
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			if (i > 0)
			{
				_putchar('\n');
			}
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			j = 0;
		}

	}
	_putchar('\n');
}
