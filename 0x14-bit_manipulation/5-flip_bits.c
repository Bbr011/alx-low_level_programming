#include "main.h"

/**
 * flip_bits - function
 * @n: para0
 * @m: para1
 * Return: c
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, c = 0;
	unsigned long int current;
	unsigned long int e = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = e >> j;
		if (current & 1)
			c++;
	}

	return (c);
}
