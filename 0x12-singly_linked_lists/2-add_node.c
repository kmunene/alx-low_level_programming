#include "lists.h"

/**
 * add_node - adds a node to head of a linked list
 * @head: pointer to the head of the list
 * @str: pointer to the string men the list
 *
 * Return: address of the new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int k;

	for (k = 0; str[k]; k++)
		;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = k;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
