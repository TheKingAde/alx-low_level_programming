#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, res;
	char *buffer;
	int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = 0;
	while (text_content[len] != '\0')
		len++;
	buffer = malloc(len + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}
	for (i = 0; i < len; i++)
		buffer[i] = text_content[i];
	buffer[len] = '\0';
	res = write(fd, text_content, len);
	if (res == -1)
	{
		close(fd);
		free(buffer);
		return (-1);
	}
	close(fd);
	free(buffer);
	return (1);
}
