#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at tg
 * @head: pointer to pointer of a node
 * @str: pointer to the string
 *
 * Return: If the function fails - NULL.
 * if else - address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int k;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (k = 0; str[k];)
		k++;

	new->str = dup;
	new->len = k;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
