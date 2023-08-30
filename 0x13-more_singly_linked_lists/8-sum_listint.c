#include "lists.h"
/**
 * sum_listint - retuns the sum of all data in a linked list
 * @head: pointer to head of list
 * Return: interger sum all data(n)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
