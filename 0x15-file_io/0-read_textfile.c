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
	int fd;
	size_t num_chars_read;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	num_chars_read = read(fd, buf, letters);
	if (num_chars_read == (size_t)-1)
		return (0);

	num_chars_read = write(STDOUT_FILENO, buf, num_chars_read);
	if (num_chars_read != letters)
		return (0);

	close(fd);
	free(buf);
	return (num_chars_read);
}
