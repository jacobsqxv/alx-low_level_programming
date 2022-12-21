#include "main.h"

/**
 * reverse_array - function
 * @a: array
 * @n: number of elements in array
 * Description: reverses the content of an array of integers.
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
