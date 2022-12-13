#include "main.h"

/**
 * print_last_digit - entry point
 * @i: input integer
 * Description: using print_last_digit function
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	
	if (n < 0)
	{
		n = (n * -1);
	}
	_putchar(n + '0');
	return (n);
}
