#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - starting point
 * @argc: coomand line args
 * @argv: array
 * Description: multiply two numbers
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc == 3)
	{
		mul *= atoi(argv[argc - 2]);
		mul *= atoi(argv[argc - 1]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
