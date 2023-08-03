#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int flag = 0;

	mask <<= (sizeof(unsigned long int) * 8 - 1);
	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (mask)
	{
		if ((n & mask) == 0)
		{
			if (flag == 1)
				putchar('0');
		}
		else
		{
			putchar('1');
			flag = 1;
		}
		mask >>= 1;
	}
}
