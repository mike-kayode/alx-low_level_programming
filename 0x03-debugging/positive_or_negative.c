#include "main.h"

/**
 *positivr_or_negative - check for positive or negatve numbers
 @i: the number to be checked
 *Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
