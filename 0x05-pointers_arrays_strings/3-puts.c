#include "main.h"

/**
 * _puts - function
 * @str: parameter
 * return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
