#include "main.h"
/**
* leet - converts each A(a) to 4, E(e) to 3, O(o) to 0, T(t) to 7, L(l) to 1
*
* @str: string to be converted
*
* Return: converted string
*/
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
				str[i] = numbers[j];
		}
	}
	return (str);
}
