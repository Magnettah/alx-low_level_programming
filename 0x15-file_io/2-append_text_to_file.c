#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminator string to add at the end of the file
 * Return: On success 1 and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, _write, _close;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	_write = write(file_d, text_content, strlen(text_content));
	if (_write == -1)
	{
		close(file_d);
		return (-1);
	}

	_close = close(file_d);
	if (_close == -1)
		return (-1);

	return (1);
}
