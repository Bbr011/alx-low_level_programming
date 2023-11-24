#include "main.h"

/**
 * get_endianness - function
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
