#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head of the dlistint_t list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
