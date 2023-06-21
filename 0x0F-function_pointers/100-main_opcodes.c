#include <stdio.h>
#include <stdlib.h>

/**
 * printOpcodes - function that print opcode
 * @start: charcter
 * @numBytes: integer
 * Return: 1 or 2 if fail return 0
 */

void printOpcodes(unsigned char *start, int numBytes)
{
	int i;
	for (i = 0; i < numBytes; i++)
	{
		printf("%02x", start[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int numBytes = atoi(argv[1]);
	if (numBytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *mainStart = (unsigned char*)main;
	printOpcodes(mainStart, numBytes);
	return (0);
}
