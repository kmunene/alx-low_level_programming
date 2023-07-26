#include "main.h"
/**
 * _puts - prints a str, followw line,
 * @str: pointer to the to print
 * Return: void
*/


void _puts(char *str)
{
int index = 0;
while (str[index])
{
	_putchar(str[index]);
	index++;
}
_putchar('\n');
}
