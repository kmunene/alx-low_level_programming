#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: Decimal parameter
 * @index: Index
 * Return: Value of the bit at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int vic;

    vic = (n >> index);
    if (index > 32)
        return (-1);
    return (vic & 1);
}

