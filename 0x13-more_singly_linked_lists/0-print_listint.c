#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the header of a listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodez = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodez++;
	}

	return (nodez);
}
