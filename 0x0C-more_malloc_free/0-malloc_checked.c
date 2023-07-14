#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc
* @b: amount of mem to allocate
* Return: pointer to allocated chunk
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == INT_MAX)
		exit(98);

	ptr = (void *) malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
