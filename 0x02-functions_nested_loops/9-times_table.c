#include "main.h"

/**
 * times_table - entry point
 * Description: print 9 times table
 * Return: 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 9)
			{
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i * j) + '0');
			}
		}
		_putchar('\n');
	}
}
