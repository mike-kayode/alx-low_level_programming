#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument
 * @argv: second argument
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
