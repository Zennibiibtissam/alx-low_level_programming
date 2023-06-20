#include "main.h"
/**
 * _isalpha - checks for alphabetic character either lowercase or uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
char alpha = 'a';
char alpha2 = 'A';
for (; alpha2 <= 'Z' && alpha <= 'z' ; alpha++, alpha2++)
{
if (alpha == c || alpha2 == c)
{
return (1);
}
}
return (0);
}
