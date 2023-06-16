#include <stdio.h>
#include <string.h>
/**
* main - prints the alphabet in lowercase reversed
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;
alphabet = 'z';

while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
