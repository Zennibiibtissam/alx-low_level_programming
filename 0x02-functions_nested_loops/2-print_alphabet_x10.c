#include "main.h"
/**
* print_alphabet_x10 - prtints alphabet
*
* ten times in lowercase followed by a new line
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i = 0;
for (i = 0; i < 10; i++)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
_putchar(alphabet[i]);
i++;
}
_putchar('\n');
}
}
