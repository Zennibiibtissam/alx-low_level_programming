#include "main.h"
/**
* print_line - prints a straight line
*
* @n: number of times the character _ should be printed
* Return: VOID
*/
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}
