#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
			printf("%s", "fizz ");
		else if (i % 5 == 0)
			printf("%s", "buzz ");
		else if (i % 15 == 0)
			printf("%s", "fizzbuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
