#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	printf("\n");
	return (0);
}
