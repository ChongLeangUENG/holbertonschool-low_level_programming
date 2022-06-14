#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: A buffer to copy to
 * @src: The source string to copy
 * Return: The pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	char *str = dest;

	while (*src)
		*dest++ = *src++;
	return (str);
}
