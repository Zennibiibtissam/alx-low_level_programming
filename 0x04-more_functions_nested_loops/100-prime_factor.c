#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int number = 612852475143;
	int factor = 2, largest_factor;

	while (number != 0)
	{
		if (number % factor != 0)
			factor += 1;
		else
		{
			largest_factor = number;
			number = number / factor;
			if (number == 1)
			{
				printf("%d\n", largest_factor);
				break;
			}
		}
	}
	return (0);
}
