#include "main.h"
/**
 * _strlen - returns the length of the string
 * @string: string source to be measured
 * Return: length of string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If the file exists return 1 and -1 if the file does not exist or if you
 * do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0644);
	if (fd == -1)
		return (-1);

	fchown(fd, 1000, 1000);

	if (text_content)
	{
		n = _strlen(text_content);
		if (write(fd, text_content, n) != n)
			return (-1);
	}

	close(fd);

	return (1);
}
