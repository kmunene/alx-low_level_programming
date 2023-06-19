#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tensDigit1;
	int onesDigit1;
	int tensDigit2;
	int onesDigit2;

	for (tensDigit1 = 0; tensDigit1 < 10; tensDigit1++)
	{
		for (onesDigit1 = 0; onesDigit1 < 10; onesDigit1++)
		{
			for (tensDigit2 = tensDigit1; tensDigit2 < 10; tensDigit2++)
			{
				for (onesDigit2 = (tensDigit2 == tensDigit1 ? onesDigit1 + 1 : 0); onesDigit2 < 10; onesDigit2++)
				{
					putchar('0' + tensDigit1);
					putchar('0' + onesDigit1);
					putchar(' ');
					putchar('0' + tensDigit2);
					putchar('0' + onesDigit2);

					if (tensDigit1 != 9 || onesDigit1 != 8 || tensDigit2 != 9 || onesDigit2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

