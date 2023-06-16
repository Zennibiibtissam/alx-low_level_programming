#include <stdio.h>
#include <string.h>
/**
* main - prints the alphabet in lowercase without e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
if (alphabet[i] == 'q' || alphabet[i] == 'e')
{
i++;
continue;
}
putchar(alphabet[i]);
i++;
}
putchar('\n');
return (0);
}
