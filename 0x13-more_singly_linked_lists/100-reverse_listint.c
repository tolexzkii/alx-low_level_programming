#include "lists.h"

/**
 * listint_t *reverse_listint - reverses a listint_t linked list
 * @head: head of list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = NULL;
	b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;
	return (*head);
}
