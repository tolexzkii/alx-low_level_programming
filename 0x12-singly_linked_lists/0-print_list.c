#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t n_element;

	n_element = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_element++;
	}
	return (n_element);
}
