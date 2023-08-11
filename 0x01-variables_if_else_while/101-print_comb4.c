#include <stdio.h>

/**
 * main - funciton
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int m, o;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			o = 0;
			while (o <= 9)
			{
				if (n != m && n < m && m != o && m < o)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(o + 48);

					if (n + m + o != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
