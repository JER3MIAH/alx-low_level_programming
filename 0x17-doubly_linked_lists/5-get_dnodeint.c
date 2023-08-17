#include "lists.h"

/**
 * get_dnodeint_at_index - Fetches the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the desired node, starting from 0.
 *
 * Return: Address of the nth node, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head; /* Begin the journey from the head */
	unsigned int i = 0; /* The index of our steps, starting from 0 */

	while (current != NULL) /* As long as there's more to explore */
	{
		if (i == index) /* Our quest led us to the desired index */
			return (current); /* Reveal the treasure we found */

		current = current->next; /* Continue the adventure */

		i++; /* Another step closer to the goal */
	}

	return (NULL); /* Our quest was in vain, no treasure found */
}

