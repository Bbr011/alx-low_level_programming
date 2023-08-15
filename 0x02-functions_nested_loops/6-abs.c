#include "main.h"

/**
 * _abs - function
 * @a: parameter
 * Return: 0 and  -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}

	return (0);
}
