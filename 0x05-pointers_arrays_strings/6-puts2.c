#include "main.h"
/**
 * puts2 - prints a   line,
 * @str: pointer to theing to print
 * Return: void
*/

void puts2(char *str)
{
int index = 0;
while (str[index] != '\0')
{
	if (index % 2 == 0)
	{
		_putchar(str[index]);
	}

	index++;
}
_putchar('\n');
}
