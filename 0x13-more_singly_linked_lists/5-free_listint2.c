#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to function that frees a listint_t list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *freer;

	while (freer == NULL)
	{
		freer = *head;
		*head = (*head)->next;
		free(freer);
	}

	*head = NULL;
}
