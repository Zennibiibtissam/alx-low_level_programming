#include "main.h"

/**
* string_nconcat - function that concats two strings.
* @s1: first string.
* @s2: second string.
* @n: amount of bytes to be taken from s2
* Return: concated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int add = 0;
	char *newstring;
	unsigned int len1;
	unsigned int len2;
	unsigned int LEN;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		LEN = len1 + len2;
	else
		LEN = len1 + n;
	newstring = (char *) malloc(LEN + 1);
	if (newstring == NULL)
		return (NULL);
	for (; add < len1; ++add)
		newstring[add] = s1[add];
	for (add = 0; (add + len1) < LEN; ++add)
		newstring[add + len1] = s2[add];
	newstring[LEN] = 0;
	return (newstring);
}



