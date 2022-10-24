#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h;
	listint_t *cur;

	if (*head == NULL)
		return (0);

	cur = *head;

	h_node = cur->n;

	h = cur->next;

	free(cur);

	*head = h;

	return (h_node);
}
