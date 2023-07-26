#include "main.h"

/**
 * puts_half - prin cond half of a string
 * @str: char array strtype
 * Description: If odd numbprint (length - 1) / 2
 */

void puts_half(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		;

	index++;
	for (index /= 2; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
