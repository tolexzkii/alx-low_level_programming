#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of list
 */
void free_listp(listp_t **head)
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
 * free_listint_safe - frees a listint_t list
 * @h: head of list
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n_node = 0;
	listint_t *c;
	listp_t *hp, *new, *add;

	hp = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp(&hp);
				return (n_node);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		n_node++;
	}

	*h = NULL;
	free_listp(&hp);
	return (n_node);
}
