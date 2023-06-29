#include "main.h"
#include <string.h>
/**
* string_toupper - converts a string to uppercase
*
* @str: string to be converted
*
* Return: the resulting string
*/
char *string_toupper(char *str)
{
	int i = 0;
	int size = strlen(str);

	for (; i < size; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
