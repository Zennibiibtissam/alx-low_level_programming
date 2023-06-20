#include "main.h"
/**
* main - prints _putchar followed by new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
