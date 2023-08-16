#include <stdio.h>
#include "main.h"

/**
 * numLength - function
 * @n: parameter
 * Return: length
 */

int numLength(int n)
{
	int length = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	int c, i;
	unsigned long f1 = 1, f2 = 2, s, mx = 100000000, f1o = 0, f2o = 0, so = 0;

	for (c = 1; c <= 98; c++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		i = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}
		printf("%lu", f1);

		s = (f1 + f2) % mx;
		so = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = s;
		f2o = so;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
