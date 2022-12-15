#include "main.h"

/**
 * print_diagonal - function
 * @n: input integer
 * Description: print diagonals
 * Return: void
 */

void print_diagonal(int n)
{
	int i, sp;

	for (i = 1; i <= n; i++)
	{
		for (sp = 1; sp <= i; sp++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
