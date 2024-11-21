#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a doubly linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;

    /* Handle empty list */
    if (*head == NULL)
        return (-1);

    /* Special case: deleting head node */
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    /* Traverse to the node before the one to be deleted */
    for (i = 0; current != NULL && i < index; i++)
    {
        current = current->next;
    }

    /* Check if index is out of bounds */
    if (current == NULL)
        return (-1);

    /* Update previous node's next pointer */
    if (current->prev != NULL)
        current->prev->next = current->next;

    /* Update next node's previous pointer */
    if (current->next != NULL)
        current->next->prev = current->prev;

    /* Free the node */
    free(current);

    return (1);
}
