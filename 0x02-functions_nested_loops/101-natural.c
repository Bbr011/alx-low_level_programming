#include "main.h"
#include <stdio.h>
/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	int s, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}
	printf("%d\n", s);

	return (0);
}
