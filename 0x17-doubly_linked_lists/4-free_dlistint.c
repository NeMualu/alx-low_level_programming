#include "lists.h"

/**
 * free_dlistint - Releases memory allocated for a dlistint_t linked list
 *
 * @head: Pointer to the start of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current_node;

    // Ensure we start at the very beginning of the list
    while (head && head->prev != NULL)
        head = head->prev;

    // Traverse and free each node
    while (head != NULL)
    {
        current_node = head;  // Hold reference to current node
        head = head->next;    // Move to the next node
        free(current_node);   // Free the current node
    }
}

