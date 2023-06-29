#include "main.h"
/**
* _strncpy - copies a string
*
* @dest: destination string
* @src: source string
* @n: number of bytes to copy
*
* Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	for (; j < n; j++)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
