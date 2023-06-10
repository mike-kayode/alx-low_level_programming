#include <stdio.h>
#include <stdlib.h>

/*
 * main - function that print minimum number
 * @argc: interger
 * @argv: string
 * Return: Error follow by the new line and return 1
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents /5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
