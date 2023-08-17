#include "main.h"

/**
 * print_diagonal - function
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');

	}
}
