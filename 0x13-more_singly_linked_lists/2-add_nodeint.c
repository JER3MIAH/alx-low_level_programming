#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to new node, and NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	new = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
