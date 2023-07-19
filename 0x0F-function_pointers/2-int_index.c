#include "function_pointers.h"
/**
 * int_index - return index
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to ind out one of th three in 0ne
 * Return: xero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

