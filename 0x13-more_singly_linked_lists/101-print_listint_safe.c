#include "lists.h"

/**
 * listp - frees a linked list
 * @head: head of list
 */
void listp(listp_t **head)
{
	listp_t *t;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints listint_t linked list
 * @head: head of list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_node = 0;
	listp_t *hp, *new, *add;

	hp = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				listp(&hp);
				return (n_node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_node++;
	}

	listp(&hp);
	return (n_node);
}
