#include "main.h"

/**
 * _pow_recursion - function
 * @y: para1
 * @x: para2
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
