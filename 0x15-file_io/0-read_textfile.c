#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}
	lenr = read(file_desc, buffer, letters);
	close(file_desc);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
