#include "main.h"
/**
 * 
* print_alphabet - prtints alphabet in lowercase followed by a new line
*
* Return: Always 0 (Success)
*
*/
void print_alphabet(void)
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
