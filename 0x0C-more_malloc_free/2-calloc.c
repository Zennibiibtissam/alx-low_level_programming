#include "main.h"

/**
* _calloc -  function that allocates memory for an array, using malloc.
* @nmemb: amount of elements to be allocated
* @size:  size of every element
* Return: pointer to the allocated chunk of memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *spc;
	unsigned int add;

	if (nmemb == 0 || size == 0)
		return (NULL);

	spc = (void *) malloc(nmemb * size);

	if (spc == NULL)
		return (NULL);

	for (add = 0; add < nmemb * size; ++add)
		((char *)(spc))[add] = 0x0;

	return (spc);
}
