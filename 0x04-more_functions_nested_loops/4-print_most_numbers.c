#include <stdio.h>

/**
 * Working this one out.
 *
 * Return: 0 for success.
 */
int main(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        if (i != 2 && i != 4)
        {
            char digit = i + '0';
            putchar(digit);
        }
    }

    putchar('\n');

    return (0);
}

