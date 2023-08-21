#include "main.h"

/**
 * swap_int - function
 * @a: parameter
 * @b: parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
