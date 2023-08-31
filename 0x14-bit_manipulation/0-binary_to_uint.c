#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    int kelvin;
    unsigned int decimal_value = 0;

    if (!b)
        return (0);

    for (kelvin = 0; b[kelvin]; kelvin++)
    {
        if (b[kelvin] < 48 || b[kelvin] > 49)
            return (0);
        decimal_value = 2 * decimal_value + (b[kelvin] - 48);
    }
    return (decimal_value);
}

