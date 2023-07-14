#include "main.h"

/**
* array_range - function that creates an array of integers.
* @min: min bound
* @max: max bound
* Return: the pointer to the newly created array
*/
int  *array_range(int min, int max)
{
	int *rng;
	int add;
	int var;

	if (min > max)
		return (NULL);

	var    = (max - min) + 1;
	rng = (int *) malloc(var * sizeof(int));

	if (rng == NULL)
		return (NULL);

	for (add = 0; add < var ; ++add)
		rng[add] = (min + add);

	return (rng);
}
