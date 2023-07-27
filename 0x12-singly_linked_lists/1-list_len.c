#include "lists.h"

/**
  *list_len - prints the ele in list.
  *@h: pointer to list.
  *
  *Return: element size in a linked list
  */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
