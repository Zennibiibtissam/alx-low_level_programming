#include "main.h"
/**
* _isdigit - return 1 if c is a digit
* @c: character to be checked
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	char a = '0';

	for (; a <= '9'; a++)
	{
		if (c == a)
			return (1);
	}
	return (0);
}
