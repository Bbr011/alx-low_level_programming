#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text prints it
 * @filename: text
 * @letters: letters to be read
 * Return: w- or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	c = read(a, buf, letters);
	b = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(a);
	return (b);
}
