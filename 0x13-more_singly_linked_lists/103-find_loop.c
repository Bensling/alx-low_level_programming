#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *looper;
	listint_t *prev;

	looper = head;
	prev = head;
	while (head && looper && looper->next)
	{
		head = head->next;
		looper = looper->next->next;

		if (head == looper)
		{
			head = prev;
			prev =  looper;
			while (1)
			{
				looper = prev;
				while (looper->next != head && looper->next != prev)
				{
					looper = looper->next;
				}
				if (looper->next == head)
					break;

				head = head->next;
			}
			return (looper->next);
		}
	}

	return (NULL);
}
