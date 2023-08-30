#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to thr head pointer of the list
 * @n: integer value for the new node
 * Return: address of the new elemment, or NULL on failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
