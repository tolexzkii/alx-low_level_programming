#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: numbers of letters printed
 * Return: numbers of letters printed, if fail return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nr = read(fd, buf, letters);
	nw = write(STDOUT_FILENO, buf, nr);

	close(fd);

	free(buf);

	return (nw);
}
