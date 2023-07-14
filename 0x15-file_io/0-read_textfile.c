#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it
 * @filename: Character string
 * @letters: Size of leter
 * Return: The actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *) malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten <= 0 || bytesWritten != bytesRead)
	{
		fclose(file);
		free(buffer);
		return (0);
	}	fclose(file);
	free(buffer);
	return (bytesRead);
}
