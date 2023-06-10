#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * main - function that add two positive number
 * @argc: first interger
 * @argv: string of arrays
 * Return: Print error follow by new line 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *number = argv[i];
		int j = 0;
		while (number[j] != '\0')
		{
			if (!isdigit(number[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(number);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
