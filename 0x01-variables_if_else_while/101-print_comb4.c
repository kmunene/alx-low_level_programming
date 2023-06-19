#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tensDigit;
	int onesDigit;

	for (tensDigit = 0; tensDigit < 10; tensDigit++)
	{
		for (onesDigit = tensDigit + 1; onesDigit < 10; onesDigit++)
		{
			putchar('0' + tensDigit);
			putchar('0' + onesDigit);

			if (tensDigit != 8 || onesDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
