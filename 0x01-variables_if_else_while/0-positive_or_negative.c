#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
             

	if (n > 0)
	{
		printf("%i positive\n", n);
	} else if (n == 0)
	{
		printf("%i zero\n", n);
	} else {
	       printf("%i negative\n", n);
	}
	printf("\n");

	
	return (0);
}
