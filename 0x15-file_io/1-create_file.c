#include "main.h"
/**
 * create_file - funtion that creates a file
 * @filename: name of the file to be created
 * @text_content: null terminated string to write the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, printed_letters, k;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == 1)
		return (-1);

	if (text_content != NULL)
	{
		for (k = 0; text_content[k] != '\0'; k++)
			;

		printed_letters = write(fd, text_content, k);
		if (printed_letters == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
