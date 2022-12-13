#include "main.h"

/**
 * main - Entry point
 * 
 * Description: using main function
 * this program prints _putchar
 * Return: 0
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		*c++;
	}
	_putchar('\n');
	return (0);
}
