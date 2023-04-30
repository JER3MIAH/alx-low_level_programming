#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list
 * @h: head of the list
 *
 * Return: returns number of nodes
 */

size_t print_listint(const listint_t *h)
{
    size_t number = 0;

    while (current) 
    {
        printf("%d\n", current->n);
        current = current->next;
        number++;
    }

    return number;
}
