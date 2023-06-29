#include "main.h"
/**
* _strncat - concatenates two strings with n bytes from src
*
* @dest: string to be appended to
* @src: string to append
* @n: number of bytes to append
*
* Return: concatenated string up to n bytes
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
