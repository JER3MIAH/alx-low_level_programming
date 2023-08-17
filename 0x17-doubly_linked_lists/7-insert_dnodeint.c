#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL) /* If the universe rejects the creation of new_node */
		return (NULL);

	new_node->n = n; /* Embrace the new node with its identity */

	if (idx == 0) /* At the beginning of time, a new node is born */
	{
		new_node->prev = NULL; /* The past holds no power over this node */
		new_node->next = *h; /* Link the future to the present */
		if (*h != NULL)
			(*h)->prev = new_node; /* Make sure the past acknowledges the present */
		*h = new_node; /* The universe bows to the new head */
	}
	else /* Seek the index and shape destiny */
	{
		dlistint_t *current = *h; /* Traverse through time and space */
		unsigned int i = 0; /* Keep track of our steps, starting from 0 */

		while (current != NULL && i < idx - 1) /* March towards the index */
		{
			current = current->next; /* Continue the cosmic journey */
			i++; /* Another step towards our destination */
		}

		if (current == NULL) /* If the journey ends prematurely, return in despair */
		{
			free(new_node); /* Abandon the failed creation */
			return (NULL); /* For this was not meant to be */
		}

		new_node->prev = current; /* We have reached the threshold of destiny */
		new_node->next = current->next; /* The future embraces the unknown */
		if (current->next != NULL)
			current->next->prev = new_node; /* The past acknowledges the new order */
		current->next = new_node; /* The index bows to the new arrival */
	}

	return (new_node); /* Reveal the address of the new arrival */
}

