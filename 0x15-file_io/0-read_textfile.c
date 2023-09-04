#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a test file and prints it to the stdout
 * @filename: name of file
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n_read, n_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
		return (0);

	close(fd);

	n_write = write(STDOUT_FILENO, buffer, n_read);

	if (n_write == -1 || n_write != n_read)
		return (0);

	free(buffer);

	return (n_write);
}
