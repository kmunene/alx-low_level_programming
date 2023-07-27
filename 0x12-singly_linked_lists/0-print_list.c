#include "lists.h"

/**
 * print_list - prints elemen a list.
 * @h: pointer to the  node.
 *
 * Dispaly all the elements found
 *
 * Return: size of elements in list.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", list->len, list->str);
		list = list->next;
		n++;
	}

	return (n);
}
