#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all data (n) in a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* The treasure we seek, starting at zero */
	dlistint_t *current = head; /* Begin the journey from the head */

	while (current != NULL) /* As long as there's more to explore */
	{
		sum += current->n; /* Add the data of the current node to our treasure */
		current = current->next; /* Continue the adventure */
	}

	return (sum); /* Reveal the treasure we gathered */
}

