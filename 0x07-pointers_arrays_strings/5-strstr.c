#include "main.h"

/**
 * _strstr - function
 * @haystack: string
 * @needle: substring
 * Description: locate substring in string
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	while (*(haystack + i) != '\0')
	{
		k = i;
		j = 0;
		while (*(needle + j) == *(haystack + i) && *(haystack + i) != '\0')
		{
			i++;
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + k);
		}
		i = k + 1;
	}
	return (0);
}
