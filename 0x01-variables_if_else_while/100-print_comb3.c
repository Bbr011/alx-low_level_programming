#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int n = 0, m;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			if (n != m && n < m)
			{
				putchar(n + 48);
				putchar(m + 48);

				if (n + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
