#include "main.h"
/**
 * swap_int - swap varis
 * @a: pointer
 * @b: pointer 
 * Return: void
*/

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
