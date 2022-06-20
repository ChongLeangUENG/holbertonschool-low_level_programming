#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value of x
 * @x: An input integer
 * @y: An input integer
 * Return: The resule x raised by y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
