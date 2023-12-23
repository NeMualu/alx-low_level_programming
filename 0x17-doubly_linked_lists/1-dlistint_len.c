#include "lists.h"

/**
 * dlistint_len - Calculates the number of elements in a doubly linked list
 *
 * @head: Pointer to the start of the list
 * Return: Count of elements in the list
 */
size_t dlistint_len(const dlistint_t *head)
{
    size_t node_count = 0;

    // Check for an empty list
    if (!head)
        return node_count;

    // Move to the first node of the list
    while (head->prev != NULL)
        head = head->prev;

    // Traverse the list and count the nodes
    while (head)
    {
        node_count++;
        head = head->next;
    }

    return node_count;
}

