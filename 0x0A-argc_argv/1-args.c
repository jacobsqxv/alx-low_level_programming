#include "main.h"
#include <stdio.h>

/**
 * main - starting point
 * @argc: number of command line args
 * @argv: array
 * Description: print number of arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int count;

	(void)argv;
	for (count = 0; count < argc; count++)
	{
		if (count + 1 == argc)
			printf("%i\n", count);
	}
	return (0);
}
