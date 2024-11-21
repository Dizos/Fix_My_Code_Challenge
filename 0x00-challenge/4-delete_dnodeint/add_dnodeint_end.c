#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Value to be added
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *last;

    /* Allocate new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    /* Set node values */
    new_node->n = n;
    new_node->next = NULL;

    /* If list is empty */
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    /* Find the last node */
    last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    /* Link the new node */
    last->next = new_node;
    new_node->prev = last;

    return (new_node);
}
