#include "main.h"
#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	int c;
	unsigned long fl = 0, f2 = 1, s;

	for (c = 0; c < 50; c++)
	{
		s = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = s;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
