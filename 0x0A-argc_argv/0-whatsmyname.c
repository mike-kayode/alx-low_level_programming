#include <stdio.h>
#include <string.h>

/**
 * main - Function that print name
 * @argv: character invoking
 * @argc: integer
 * Return: succcess
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
