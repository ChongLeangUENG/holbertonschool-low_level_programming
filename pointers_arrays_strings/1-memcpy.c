#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: A destionation memory
 * @src: Source of memory
 * @n: A bytes file
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *stop = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (stop);
}
