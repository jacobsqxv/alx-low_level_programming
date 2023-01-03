#include "main.h"

/**
 * print_diagsums - function
 * @a: array
 * @size: size of array
 * Description: print sum of diagonals in a matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				l = l + a[(size + 1) * i];
			}
			if (i + j == size - 1)
			{
				r = r + a[(size - 1) * (i + 1)];
			}
		}
	}
	printf("%i, %i\n", l, r);
}
