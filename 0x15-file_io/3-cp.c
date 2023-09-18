#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - entry point
 * @argc: arguemnt count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n");
			exit(97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);

	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (to_fd == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);

	while ((read_bytes = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(to_fd, buffer, read_bytes) != read_bytes)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
				exit(99);
		}
	}
	if (read_bytes == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);

	if (close(from_fd) == -1)
		dprintf(2, "Error: Can't close fd %d\n", from_fd);
			exit(100);

	if (close(to_fd) == -1)
		dprintf(2, "Error: Can't close fd %d\n", to_fd);
			exit(100);

	exit(0);
}
