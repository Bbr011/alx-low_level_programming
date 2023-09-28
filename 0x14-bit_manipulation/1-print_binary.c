#include "main.h"

/**
 * print_binary - function
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int j, c = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
