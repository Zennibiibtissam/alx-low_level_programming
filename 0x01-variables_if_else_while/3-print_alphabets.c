#include <stdio.h>
#include <ctype.h>
/**
* main - prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
putchar(alphabet[i]);
i++;
}
i = 0;
while (i < 26)
{
putchar(toupper(alphabet[i]));
i++;
}
putchar('\n');
return (0);
}
