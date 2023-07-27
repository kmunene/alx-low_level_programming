#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free a list oof  nodes `
 * @head: The ponter to the head node
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
