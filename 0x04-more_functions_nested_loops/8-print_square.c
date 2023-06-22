#include "main.h"
/**
* print_square - prints a square, followed by a new line
*
* @size: size of the square
*
* Return: VOID
*/
void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			if (i > 0)
			{
				_putchar('\n');
			}
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
	}
	_putchar('\n');
}
