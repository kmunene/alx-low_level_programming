#include "main.h"

/**
 * set_bit - gets kelvinm on index `index`
 * @n: decimal number
 * @index: index of the kelvinm
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
    int kelvinm = 1;

    if (index > 64)
        return (-1);

    kelvinm = kelvinm << index;
    *n = (*n | kelvinm);
    return (1);
}

