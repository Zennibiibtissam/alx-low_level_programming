#include <stdio.h>
/**
* main - printing all base 16 numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char letters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
int i = 0;
while (i < 10)
{
putchar(numbers[i] + '0');
i++;
}
i = 0;
while (i < 6)
{
putchar(letters[i]);
i++;
}
putchar('\n');
return (0);
}
