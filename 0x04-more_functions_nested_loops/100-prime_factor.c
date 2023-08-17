#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long num = 612852475143;
    unsigned long largest = 0;

    while (num % 2 == 0)
    {
        largest = 2;
        num /= 2;
    }

    for (unsigned long i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            largest = i;
            num /= i;
        }
    }

    if (num > 2)
        largest = num;

    printf("%lu\n", largest);

    return (0);
}

