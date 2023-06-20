#include "main.h"
/**
* _islower - checks for lowercase character
*
* @c: character to be checked
*
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
char alpha = 'a';
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
if (alpha == c)
{
return (1);
}
}
return (0);
}
