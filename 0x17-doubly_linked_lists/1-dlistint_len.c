#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head
 * Return: number of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nums = 0;

	while (h != NULL)
	{
		nums++;
		h = h->next;
	}
	return (nums);
}
