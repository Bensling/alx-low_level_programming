#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 * Return: poper
 */
int pop_listint(listint_t **head)
{
	int poper;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	poper = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (poper);
}
