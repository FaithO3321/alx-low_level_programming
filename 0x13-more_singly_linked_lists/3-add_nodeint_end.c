#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of a list
 * @head: pointer to the head pointer of a list
 * @n: integer value to the new node data
 * Return: address of ne element, or NULL on failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n =  n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
