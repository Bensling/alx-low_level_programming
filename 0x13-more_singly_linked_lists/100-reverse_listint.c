#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t;
	listint_t *w;

	t = NULL;
	w = NULL;

	while (*head != NULL)
	{
		w = (*head)->next;
		(*head)->next = p;
		t = *head;
		*head = w;
	}

	*head = t;
	return (*head);
}
