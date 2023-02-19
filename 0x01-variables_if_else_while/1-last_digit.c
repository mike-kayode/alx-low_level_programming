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
	
	printf("Last digit of %d is ", n);


	if ((n % 5) > 5)
        {
                printf("Last digit of %d is greater than 5/n", (n % 10));
        }


        if ((n % 5) == 0)
        {
                printf("is 0\n");
        }

	else 
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
