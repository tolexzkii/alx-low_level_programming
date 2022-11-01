#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content of file
 * Return: 1 success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_letter;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letter = 0; text_content[n_letter]; n_letter++)
		;

	rw = write(fd, text_content, n_letter);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}
