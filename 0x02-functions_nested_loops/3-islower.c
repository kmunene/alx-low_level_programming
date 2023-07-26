#include "main.h"

/**
 * _islower - Check if a c is lowercase
 * @c: The char  checked
 *
 * Return: 1 if the character herwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

