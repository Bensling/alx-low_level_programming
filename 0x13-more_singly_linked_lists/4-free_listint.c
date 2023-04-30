#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to a pointer frees a listint_t list.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *freer;

	while (head != NULL)
	{
		freer = head;
		head = head->next;
		free(freer);
	}
}
