#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to the head of the lists
 * Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
