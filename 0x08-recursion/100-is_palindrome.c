#include "main.h"

/**
 * is_palindrome - function that return 1
 * @s: character string
 * Return: Return 0, 1 if a string is palindrome
 */

int is_palidrome(char *s)
{
	int len = strlen(s);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		if (s[start] != s[end])
		{
			return (0);
		}
		start++;
		end--;
	}
	return (1);
}

int main(void);
{
	char str1[] = "racecar";
	char str2[] = "hello";
	char str3[] = "";
	
	printf("%d\n", is_palindrome(str1));
	printf("%d\n", is_palindrome(str2));
	printf("%d\n", is_palindrome(str3));
	
	return (0);
}
