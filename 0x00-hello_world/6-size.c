#include <stdio.h>
/*
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void) 
{   printf("The size of char is %zu bytes.\n", sizeof(char));
    printf("The size of short is %zu bytes.\n", sizeof(short));
    printf("The size of int is %zu bytes.\n", sizeof(int));
    printf("The size of long is %zu bytes.\n", sizeof(long));
    printf("The size of long long is %zu bytes.\n", sizeof(long long));
    printf("The size of float is %zu bytes.\n", sizeof(float));
    printf("The size of double is %zu bytes.\n", sizeof(double));
    printf("The size of long double is %zu bytes.\n", sizeof(long double));

    return(0);
}
