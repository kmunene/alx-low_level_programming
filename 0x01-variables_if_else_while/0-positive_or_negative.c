#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Print the number */
    printf("The number is: %d\n", n);

    /* Check if the number is positive, negative, or zero */
    if (n > 0)
    {
        printf("The number is positive.\n");
    }
    else if (n < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}

