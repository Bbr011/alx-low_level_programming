#include "main.h"
#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, s;
	float total_sum;

	while (1)
	{
		s = f1 + f2;

		if (s > 4000000)
			break;

		if ((s % 2) == 0)
			total_sum += s;
		f1 = f2;
		f2 = s;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
