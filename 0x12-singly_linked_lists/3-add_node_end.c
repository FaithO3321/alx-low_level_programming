#include "lists.h"
/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to pointer of the head
 * @str: duplicate string to add the node
 * Return: address of new element or null on failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *dup;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = dup;
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
