#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Function that copy
 * @message: Message
 * @filename: Filename
 * @code: Integer
 * Return: Suceess
 */

void print_error(const char *message, const char *file_name, int code)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(code);
}

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer [BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to", argv[0], 97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		print_error("Error: Can't write to %s\n", argv[2], 99);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Error: Can't write to %s\n", argv[2], 99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Error: Can't read from %s\n", argv[1], 98);
	}
	if (close(file_from) == -1)
	{
		print_error("Error: Can't close fd %d\n", argv[1], 100);
	}
	if (close(file_to) == -1)
	{
		print_error("Error: Can't close fd %d\n", argv[2], 100);
	}
	return (0);
}
