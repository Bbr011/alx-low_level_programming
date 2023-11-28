#include "main.h"

/**
 * append_text_to_file - Appends text at the end of files
 * @filename: name of the file.
 * @text_content: string to add to the end of the file.
 * Return: If function fails or filename is NULL - -1.
 *         or If file does not exist the user lacks write permissions - -1.
 *         or - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	wr = write(o, text_content, leng);

	if (o == -1 || wr == -1)
		return (-1);

	close(o);

	return (1);
}
