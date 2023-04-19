#include "function_pointers.h"

/**
 * array_iterator - prits array on a new line
 * @array: array
 * @size: size to print
 * @action: pointer to print
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
					i++;
					}
					}
					}

