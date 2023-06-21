#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			print_times_row(i, n);
			_putchar('\n');
		}
	}
}

/**
 * print_times_row - prints a single row of the times table
 * @row: the row number
 * @n: number of the times table
 */
void print_times_row(int row, int n)
{
	int j;

	for (j = 0; j <= n; j++)
	{
		int result = row * j;

		if (j != 0)
		{
			_putchar(',');
			_putchar(' ');

			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (result < 100)
			{
				_putchar(' ');
			}
		}

		if (result < 10)
			_putchar(result + '0');
		else if (result < 100)
		{
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		else
		{
			_putchar(result / 100 + '0');
			_putchar((result / 10) % 10 + '0');
			_putchar(result % 10 + '0');
		}
	}
}

