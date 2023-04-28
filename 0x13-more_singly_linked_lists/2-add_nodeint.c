#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @n: integer value to be added to the new node
 * @head: pointer to pointer to the head of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodister = 0;

	nodister = malloc(sizeof(listint_t));
	if (nodister == NULL)
	{
		return (NULL);
	}

	nodister->n = n;
	nodister->next = *head;
	*head = nodister;

	return (nodister);
}
