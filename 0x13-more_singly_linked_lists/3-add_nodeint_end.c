#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @n: integer
 * @head: pointer to pointer to a listint_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (new_node);
}
