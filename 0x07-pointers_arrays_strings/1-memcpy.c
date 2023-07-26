#include "main.h"

/**
  * _memcpy - copy memory
  * @dest:pointer torn
  * @src: sourceory area
  * @n: bytes om memory area to copy
  *
  * Return: the pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
