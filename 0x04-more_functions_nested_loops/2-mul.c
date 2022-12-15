#include "main.h"

/**
 * mul - function
 * @a: first input integer
 * @b: second input integer
 * Description: multiply two integers
 * Return: result
 */

int mul(int a, int b)
{
	int p;

	p = a * b;

	if ((p / 10) > 0)
	{
		_putchar((p / 10) + '0');
	}
	else
	{
		_putchar((p % 10) + '0');
	}
}
