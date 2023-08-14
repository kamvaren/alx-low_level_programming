#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("Last digit of %d is %d and ", n, n % 10);

    if (n % 10 > 5)
        printf("is greater than 5");
    else if (n % 10 == 0)
        printf("is 0");
    else
        printf("is less than 6 and not 0");

    printf("\n");

    return (0);
}

