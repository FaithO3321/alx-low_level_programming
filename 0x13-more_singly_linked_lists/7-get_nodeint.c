#include "lists.h"
/**
 * get_nodeint_at_index -returnd the nth node of a list
 * @head: pointer to pointer hrsd of list
 * @index: indect of first node to find
 * Return: pointer to next node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	listint_t *temp = head;

	for (node = 0; node < index; node++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}
	return (temp);
}
