#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if success. -1 if failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(file_desc, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(file_desc);

	return (1);
}
