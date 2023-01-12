#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create array of integers
 * @min: minimum
 * @max: maximum
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *str, i;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * (max - min + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		*(str + i) = min;
	}
	return (str);
}
