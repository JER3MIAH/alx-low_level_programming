#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL) /* If the universe is already empty, can't delete */
		return (-1);

	dlistint_t *current = *head; /* Traverse the vast cosmos */
	unsigned int i = 0; /* Keep track of our steps, starting from 0 */

	if (index == 0) /* Delete at the beginning, a new era begins */
	{
		*head = current->next; /* Unshackle the past */
		if (current->next != NULL)
			current->next->prev = NULL; /* Let the past know of its liberation */
		free(current); /* Release the tethered soul */
		return (1); /* Return victorious, a new chapter unfolds */
	}

	while (current != NULL && i < index) /* Seek the index, a cosmic dance */
	{
		current = current->next; /* Continue the eternal journey */
		i++; /* Another step closer to the destined index */
	}

	if (current == NULL) /* If the voyage ends without discovery, despair */
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev; /*the */
	if (current->prev != NULL)
		current->prev->next = current->next; /* The past acknowledges the future */
	free(current); /* The shackles of existence are shattered */
	return (1); /* Return triumphant, a node deleted, a balance restored */
}

