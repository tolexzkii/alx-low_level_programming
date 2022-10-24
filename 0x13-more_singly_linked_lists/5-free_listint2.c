#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((temp = cur) != NULL)
		{
			cur = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}
