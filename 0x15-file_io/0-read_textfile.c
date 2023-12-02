#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: Name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print, or
 * 0 if the file can not be opened or read, or if the file is NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t _read, _write;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(file_d);
		return (0);
	}

	_read = read(file_d, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	buffer[_read] = '\0';

	_write = write(STDOUT_FILENO, buffer, _read);
	free(buffer);
	close(file_d);

	if (_write != _read)
		return (0);

	return (_write);
}
