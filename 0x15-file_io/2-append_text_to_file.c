#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: content added
 * Return: 1 if file exist, -1 if it doesn't
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_letter;
	int rw;

	if (!filename)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n_letter = 0; text_content[n_letter]; n_letter++)
			;

		rw = write(fd, text_content, n_letter);
		
		if (rw == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
