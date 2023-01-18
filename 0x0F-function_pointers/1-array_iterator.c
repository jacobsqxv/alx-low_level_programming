#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - run a function on each element of array
 * @array: array elements
 * @size: size of array
 * @action: function to run
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
