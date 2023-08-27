#include "lists.h"
/**
 * print_list - prints all elements in a list
 * @h: pointer to the list_t list
 * Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
