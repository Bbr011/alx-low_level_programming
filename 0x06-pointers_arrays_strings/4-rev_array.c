#include "main.h"

/**
 * reverse_array - function
 * @a: para0
 * @n: para1
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = (n - 1) ; i < j ; i++ , j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
