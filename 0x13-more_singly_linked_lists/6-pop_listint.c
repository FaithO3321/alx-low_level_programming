#include "lists.h"
/**
 * pop_listint - deletes head node and return data for the head node
 * @head: pointer to the pointer of the list
 * Return: head node's data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
