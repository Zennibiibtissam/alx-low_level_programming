#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line
*
* @str: string to be printed
*
* Return: void
*/
void puts_half(char *str)
{
	int len = 0, half = 0;

	while (*str)
	{
		len++;
		str++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
	} else
	{
		half = (len + 1) / 2;
	}
	str -= len;
	while (*(str + half))
	{
		_putchar(*(str + half));
		str++;
	}
	_putchar('\n');
}
