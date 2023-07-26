#include "main.h"

/**
 * print_sign - Prin
 * @n: The integer to check
 *
 * Return: 1 and prints '+' if is greater t
 *         0 and prints '0' if n is zero
 *        -1 and prints '-' if n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}

	return (-1);
}

