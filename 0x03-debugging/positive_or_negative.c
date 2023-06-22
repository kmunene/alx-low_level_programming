#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and determines if it's positive,
 *              negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("%d ", n);

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n < 0)
    {
        printf("is negative\n");
    }
    else
    {
        printf("is zero\n");
    }

    return (0);
}

