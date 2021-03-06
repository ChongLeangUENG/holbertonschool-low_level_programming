#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer.
 * @s: A string
 * Return: 0 or numbers in the string.
 */
int _atoi(char *s)
{
	int c = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			c *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * c);
}
