#include "main.h"

/**
 * get_bit - value of a vic at a given index
 * @n: decimal parameter
 * @index: index
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int vic;

    vic = (n >> index);
    if (index > 32)
        return (-1);
    return (vic & 1);
}

