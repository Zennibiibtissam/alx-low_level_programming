#include "main.h"
/**
*  _atoi - convert a string to an integer
*
* @s: string to convert
*
* Return: the converted string
*/
int _atoi(char *s)
{
	int i = 0, sign = 1, found = 0;
	unsigned int res = 0;

	while (*(s + i))
	{
		if (*(s + i) == '-')
		{
			sign *= -1;
		}
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			res *= 10;
			res += *(s + i) - '0';
			found = 1;
		}
		else if (found)
			break;
		i++;
	}
	return (res * sign);
}
