#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a give postion
 * @head: pointer to poiter of node one
 * @idx: index where node should be added
 * @n: integer data for new node
 * Return: address of new node or NULL on failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (NULL);

	new->next = temp->next;
	temp->next = new;

	return (new);
}
