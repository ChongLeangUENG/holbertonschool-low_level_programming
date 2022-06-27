#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Write a function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n:  bytes of s2
 * Return: NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cc;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	k = i + n;

	cc = malloc(k + 1);
	if (cc == NULL)
	{
		free(cc);
		return (NULL);
	}

	for (l = 0; l < k; l++)
		if (l < i)
			cc[l] = i[l];
		else
			cc[l] = j[l - i];

	cc[k] = '\0';

	return (cc);
}
