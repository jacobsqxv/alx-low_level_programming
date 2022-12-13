#include "main.h"

/**
 * print_last_digit - entry point
 * @i: input integer
 * Description: using print_last_digit function
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	_putchar(i % 10);
	return (i % 10);
}
