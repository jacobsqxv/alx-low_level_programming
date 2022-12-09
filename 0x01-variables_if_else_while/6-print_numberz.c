#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using main function
 * this program prints alphabets in lower case
 * Return: 0
 */
int main(void)
{
        int c;

        for (c = 0; c <= 9; c++)
        {
                putchar(c%10+'0');
        }
        putchar('\n');
        return (0);
}
