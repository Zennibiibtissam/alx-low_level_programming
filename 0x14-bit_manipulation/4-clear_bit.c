#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to clear bit in
 * @index: index of bit to clear
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	bit <<= index;
	bit = ~bit;
	*n = *n & bit;
	return (1);
}
