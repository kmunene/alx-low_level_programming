#include "main.h"

/**
  * _strchr - locate character
  * @s: source st
  * @c: character to 
  *
  * Return: the string from
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
