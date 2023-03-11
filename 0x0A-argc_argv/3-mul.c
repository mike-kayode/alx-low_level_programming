#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: integer first
 * @argv: integer second
 * Return : 1 if two argument not given, 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* multiply two arguments */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
