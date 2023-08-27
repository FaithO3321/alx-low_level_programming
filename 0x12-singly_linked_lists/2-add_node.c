#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: pointer to the head of a list
 * @str: string to duplicate and insert new node
 * Return: address of new element or null on failure
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;

	*head = new;

	return (new);
}
