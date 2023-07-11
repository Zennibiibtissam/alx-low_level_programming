#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0, len = 0, words = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			len++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				words++;
		}
	}
	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0, k = 0; k < words; k++)
	{
		for (len = 0; str[i] == ' '; i++)
			;
		for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			len++;
		s[k] = malloc(sizeof(char) * (len + 1));
		if (s[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			s[k][j] = str[i++];
		s[k][j] = '\0';
	}
	s[k] = NULL;
	return (s);
}
