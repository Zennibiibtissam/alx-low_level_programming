#include "main.h"
/**
* _isupper - return 1 if c is uppercase
* @c: character to be checked
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(char c)
{
	char a = 'A';

	for (; a <= 'Z'; a++)
	{
		if (c == a)
			return (1);
	}
	return (0);
}
