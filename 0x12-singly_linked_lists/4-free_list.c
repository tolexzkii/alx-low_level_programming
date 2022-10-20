#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
	list_t *re;

	while ((re = head) != NULL)
	{
		head = head->next;
		free(re->str);
		free(re);
	}
}
