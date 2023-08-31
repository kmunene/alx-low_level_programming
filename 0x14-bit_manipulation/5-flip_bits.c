#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int kelvin, munene = 0;

    for (kelvin = n ^ m; kelvin > 0; kelvin >>= 1)
    {
        munene += (kelvin & 1);
    }

    return (munene);
}

