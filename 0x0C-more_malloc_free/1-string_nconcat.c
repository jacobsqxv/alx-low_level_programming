#include "main.h"

/**
 * _strlen - function
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - function that concats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
		len2 = n;

	str = malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		*(str + i) = *(s1 + i);

	for (i = 0; i < len2; i++)
		*(str + (i + len1)) = *(s2 + i);
	*(str + (i + len1)) = '\0';
	return (str);
}
