#include "main.h"

/**
 * swap_int - function
 * @a: first integer
 * @b: second integer
 * Description: swap two integers
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
