#include "main.h"

/**
 * _is_prime - check if nu
 *
 * @n: number to check if 
 * @x: Divider of n
 *
 * Return: 1 if n is a prime number, else 0
 */
int _is_prime(int n, int x)
{
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (_is_prime(n, x + 1));
}
/**
 * is_prime_number - checks if a num
 *
 * @n: number to check 
 *
 * Return: 1 if n is a prime number, else 0
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime(n, 2));
}
