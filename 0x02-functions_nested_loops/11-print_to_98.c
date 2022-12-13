#include "main.h"

/**
 * print_to_98 - entry point
 * @n: input integer
 * Description: print all natural numbers from n to 98
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if ((i / 10) > 0)
		{
			_putchar((i / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
		_putchar((i % 10) + '0');
	}
}
