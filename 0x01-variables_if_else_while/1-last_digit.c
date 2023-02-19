#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Entry point
 * Return: Always 0 
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("Last digit of %d ", n);

	if ((n % 10) > 5)
	{
		printf("%d is %d is greater than 5/n", n, (n % 10));
	}
	else if ((n % 10) == 0)
	{
		printf("is 0\n");
	}
	else 
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
