#include <stdio.h>

/**
 * main - program that prints the number of arguments
 * @argc: argument
 * @argv: second argument
 * Return: success
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
