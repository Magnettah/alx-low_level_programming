#include "main.h"
/**
 * create_file - creates a file and writes content
 * @filename: pointer to the created file
 * @text_content: NULL terminated string to write to the file
 * @Return: On suceess 1 and -1 on failure.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, write_count, closing;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_count = write(file_d, text_content, strlen(text_content));
		if (write_count == -1)
		{
			close(file_d);
			return (-1);
		}
	}
	closing = close(file_d);
	if  (closing == -1)
		return (-1);

	return (1);
}
