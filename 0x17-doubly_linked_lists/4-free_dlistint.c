#include "lists.h"

/**
 * free_dlistint - Sets your list free, like a majestic bird in the sky.
 * @head: Pointer to the head of the list.
 *
 * Return: Nothing, for freedom cannot be contained.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head; /* Lead them to the sky, oh valiant leader */

	while (current != NULL) /* Until the last heart is unshackled */
	{
		dlistint_t *next = current->next; /* Plan the next leap forward */

		free(current); /* Let go and embrace the unknown */
		current = next; /* Continue the journey, one step at a time */
	}

	/* At the end, there's nothing left but echoes of freedom */
}

