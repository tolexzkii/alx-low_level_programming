#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of list
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
