#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using fun;;;ction
 * @nme - names
 * @f: pointers
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

