#include "main.h"

/**
 * _strcat - function
 * @dest: parameter1
 * @src: parameter2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dcount = 0;
	int scount = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dcount++;
	for (i = 0 ; src[i] != '\0' ; i++)
		scount++;
	for (i = 0 ; i <= scount ; i++)
		dest[dcount + i] = src[i];
	return (dest);
}
