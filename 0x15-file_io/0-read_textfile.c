#include "main.h"
/**
 * read_textfile - Reads a text file
 * @filename: pointer to name of file
 * @letters: letters number to be printed
 *
 * Return: number of chars written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t READbytes;
	ssize_t WRITTENbytes, openBytes;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	openBytes = open(filename, O_RDONLY);
	if (openBytes == -1)
	{
		free(buffer);
		return (0);
	}

	READbytes = read(openBytes, buffer, letters);
	if (READbytes == 0)
	{
		free(buffer);
		close(openBytes);
		return (0);
	}

	WRITTENbytes = write(STDOUT_FILENO, buffer, READbytes);
	if (WRITTENbytes != READbytes)
	{
		free(buffer);
		close(openBytes);
		return (0);
	}
	free(buffer);
	close(openBytes);
	return (WRITTENbytes);
}
