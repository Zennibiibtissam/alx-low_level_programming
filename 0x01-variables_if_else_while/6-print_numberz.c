#include <stdio.h>
/**
* main - print numberzz
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}