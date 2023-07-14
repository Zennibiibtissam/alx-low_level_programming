#include "main.h"
#define MIN(a, b) ((a > b) ? b : a)

/**
 * _realloc - a function that reallocates memory for an array.
 * @ptr: pointer to the old chunk of memory
 * @old_size: old size of the previously alloc'd memory
 * @new_size: rlc size that will be alloc'd for the old chunk.
 * Return: (void *) pointer to the rlc allocated chunk.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *rlc;
	unsigned int add;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	rlc = malloc(new_size);

	if (rlc == NULL)
		return (NULL);

	if (old_size == 0 || ptr == NULL)
		return (rlc);

	for (add = 0; add < MIN(new_size, old_size); ++add)
		((char *)(rlc))[add] = ((char *)(ptr))[add];

	free(ptr);
	return (rlc);
}
