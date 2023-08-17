#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL) /* If allocation fails, you're on your own */
		return (NULL);

	new_node->n = n; /* Assign the value, it's a new adventure! */
	new_node->next = NULL; /* There's nothing ahead, yet! */

	if (*head == NULL) /* Empty list? New node is the head! */
	{
		new_node->prev = NULL; /* No going back, just forward! */
		*head = new_node; /* Mark the beginning of an epic journey */
	}
	else /* Find the end and add our new friend */
	{
		dlistint_t *current = *head; /* Time to explore */

		while (current->next != NULL) /* Keep searching till you find the end */
			current = current->next;

		current->next = new_node; /* Attach our new companion */
		new_node->prev = current; /* The past shapes the future */
	}

	return (new_node); /* Return the adventurer's address, or NULL in failure */
}

