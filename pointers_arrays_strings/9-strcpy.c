#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: A buffer to copy to
 * @src: The source string to copy
 * Return: The pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int in = 0;

	while (src[in])
	{
		dest[in] = src[in];
		in++;
	}
	dest = '\0';
	return (dest);
}
