#include <stdio.h>

/**
 * main- Entry point
 * Return: Always 0
 */

int main(void)
{
	char c = 'a';
        while (c <= 'z')
        if (c == 'e' || c == 'h')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
