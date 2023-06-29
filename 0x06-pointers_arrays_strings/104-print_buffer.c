#include "main.h"

char *stringAdd(char *digit1, char *digit2, char *r, int r_index);
char *infinite_add(char *digit1, char *digit2, char *r, int size_r);

/**
 * stringAdd - Adds the numbers.
 * @digit1: the first number to be added.
 * @digit2: the second number to be added.
 * @r: the result.
 * @r_index: The current index.
 *
 * Return: result + index
 */
char *stringAdd(char *digit1, char *digit2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *digit1 && *digit2; digit1--, digit2--, r_index--)
	{
		num = (*digit1 - '0') + (*digit2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *digit1; digit1--, r_index--)
	{
		num = (*digit1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *digit2; digit2--, r_index--)
	{
		num = (*digit2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}

	else if (tens && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - Adds infinite 2 numbers.
 * @digit1: The first number to be added.
 * @digit2: The second number to be added.
 * @r: the result.
 * @size_r: The size
 * Return: stringAdd return value.
 */
char *infinite_add(char *digit1, char *digit2, char *r, int size_r)
{
	int index, digit1_len = 0, digit2_len = 0;

	for (index = 0; *(digit1 + index); index++)
		digit1_len++;

	for (index = 0; *(digit2 + index); index++)
		digit2_len++;

	if (size_r <= digit1_len + 1 || size_r <= digit2_len + 1)
		return (0);

	digit1 += digit1_len - 1;
	digit2 += digit2_len - 1;
	*(r + size_r) = '\0';

	return (stringAdd(digit1, digit2, r, --size_r));
}
