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

void print_error(const char *message, const char *filename, int code)
{
	dprintf(STDERR_FILENO, message, filename);
	dprintf(STDERR_FILENO, "\n");
	exit(code);
}

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	char buffer [BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to", "", 97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s", file_from, 98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to %s", file_to, 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Error: Can't write to %s", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Error: Can't read from %s", file_from, 98);
	}
	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd %d", file_from, 100);
	}
	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd %d", file_to, 100);
	}
	return (0);
}
