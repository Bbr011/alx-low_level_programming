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
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);
	printf("\n");
	return (0);
}
