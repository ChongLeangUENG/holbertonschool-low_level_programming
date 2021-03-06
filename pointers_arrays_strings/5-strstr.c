#include "main.h"
#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: A string
 * @needle: A substring
 * Return: a pointer to the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return (NULL);
}
