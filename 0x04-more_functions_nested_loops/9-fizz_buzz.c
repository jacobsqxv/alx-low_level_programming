#include <stdio.h>

/**
 * main - entry point
 * Description: print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
		{
			printf("%s","Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s","Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}

		if (i != 100)
		{
			printf(" ");
		}		
		i++;
	}

	printf("\n");

	return 0;
}
