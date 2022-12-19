#include "main.h"

/**
 * print_array - function
 * @a: array of elements
 * @n: input integer
 * Description: print elements of array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
