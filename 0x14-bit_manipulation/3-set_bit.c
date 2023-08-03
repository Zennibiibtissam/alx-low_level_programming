#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set bit in
 * @index: index of bit to set
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	bit <<= index;
	*n = *n | bit;
	return (1);
}
