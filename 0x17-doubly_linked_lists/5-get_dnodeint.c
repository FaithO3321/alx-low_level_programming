#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 * Return: Pointer to the nth node, or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x == index)
			return (head);

		head = head->next;
		x++;
	}
	return (NULL);
}
