#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specific position
 * in a doubly linked list of type dlistint_t
 *
 * @head: Pointer to the beginning of the list
 * @index: The position of the node to retrieve
 * Return: Pointer to the desired node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int current_index;

    // Return NULL if the list is empty
    if (head == NULL)
        return (NULL);

    // Ensure starting from the first node
    while (head && head->prev != NULL)
        head = head->prev;

    // Traverse the list to find the node at the specified index
    for (current_index = 0; head != NULL; current_index++)
    {
        if (current_index == index)
            return head;  // Found the node at the desired index
        head = head->next;
    }

    // Node not found
    return (NULL);
}

