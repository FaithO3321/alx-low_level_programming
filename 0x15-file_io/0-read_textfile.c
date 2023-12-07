#include "main.h"
/**
 * read_textfile - reads and prints texts to POSIX stdout
 * @filename: pointer to filename
 * @letters: letters of the text
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_read, chars_written;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf  == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	chars_read = read(fd, buf, letters);
	if (chars_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[chars_read] = '\0';

	chars_written = write(STDOUT_FILENO, buf, chars_read);
	if (chars_written != chars_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (chars_written);
}
