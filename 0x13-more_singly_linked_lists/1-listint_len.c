#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: string to the header in a linked listint_t list
 *
 * Return: linker
 */
size_t listint_len(const listint_t *h)
{
	size_t linker = 0;

	while (h != NULL)
	{
		h = h->next;
		linker++;
	}
	return (linker);
}
