#include "main.h"
/**
* rev_string - reverses a string
*
* @s: string to be reversed
*
* Return: void
*/
void rev_string(char *s)
{
	int i = 0, strLen = 0;
	char temp;

	while (*s)
	{
		strLen++;
		s++;
	}
	s -= strLen;
	for (; i < strLen / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + strLen - i - 1);
		*(s + strLen - i - 1) = temp;
	}
}
