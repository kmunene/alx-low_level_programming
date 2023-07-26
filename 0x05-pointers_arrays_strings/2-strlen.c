#include "main.h"
/**
 * _strlen - find the lengtstring
 * @s: pointer to th g to check
 * Return: void
*/


int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
}
