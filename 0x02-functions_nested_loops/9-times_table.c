#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
*/
void times_table(void)
{
int i, j, k, l, m;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
l = k / 10;
m = k % 10;
if (j == 0)
{
_putchar('0');
}
else if (k < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(m + '0');
}
else if (k >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(l + '0');
_putchar(m + '0');
}
}
_putchar('\n');
}
}
