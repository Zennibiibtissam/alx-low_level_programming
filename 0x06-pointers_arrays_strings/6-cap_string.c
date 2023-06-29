#include "main.h"
#include <string.h>
/**
* cap_string - capitalizes all words of a string
*
* @str: string to be capitalized
*
* Return: the resulting string
*/
char *cap_string(char *str)
{
	int i, j;
	int flagged;
	char flags[] = ",;.!?(){}\n\t\" ";

	for (i = 0, flagged = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			flagged = 1;
		for (j = 0; flags[j] != '\0'; j++)
		{
			if (flags[j] == str[i])
				flagged = 1;
		}

		if (flagged)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				flagged = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				flagged = 0;
			else if (str[i] > 47 && str[i] < 58)
				flagged = 0;
		}
	}
	return (str);
}
