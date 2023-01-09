#include "main.h"

/**
 * main - starting point
 * @argc: command line args
 * @argv: array
 * Description: print received arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
