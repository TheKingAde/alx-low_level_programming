#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * copyFile - Copies the contents of one file to another.
 * @src: The source file path.
 * @dest: The destination file path.
 * Return: 0 on success, or one of the error codes on failure.
 */
int copyFile(const char *src, const char *dest)
{
	int from_fd, to_fd, r, w;
	char buffer[BUFFER_SIZE];
	mode_t mode;

	from_fd = open(src, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		return (98);
	}
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	to_fd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		close(from_fd);
		return (99);
	}
	while ((r = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to_fd, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close(from_fd);
			close(to_fd);
			return (99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		close(from_fd);
		close(to_fd);
		return (98);
	}
	close(from_fd);
	close(to_fd);
	return (0);
}
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 on success, or one of the error codes on failure
 */
int main(int argc, char *argv[])
{
	const char *src;
	const char *dest;
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	src = argv[1];
	dest = argv[2];

	result = copyFile(src, dest);

	return (result);
}
