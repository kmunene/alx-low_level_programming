#include "main.h"

/**
 * *_strcpy -  copies the string  src
 * @dest: char type string
 * @src: char type stri
 * Description: Copy the string pointed to b
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
