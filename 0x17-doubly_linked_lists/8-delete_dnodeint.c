#include "lists.h"

/**
 * delete_dnodeint_at_index - Removes a node from a specified position
 * in a doubly linked list
 *
 * @head: Double pointer to the head of the list
 * @index: The position of the node to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *previous;
    unsigned int count;

    current = *head;

    // Navigate to the start of the doubly linked list
    while (current != NULL && current->prev != NULL)
        current = current->prev;

    count = 0;

    while (current != NULL)
    {
        if (count == index)
        {
            if (count == 0)
            {
                // Deleting the first node
                *head = current->next;
                if (*head != NULL)
                    (*head)->prev = NULL;
            }
            else
            {
                // Linking previous node with next node
                previous->next = current->next;

                if (current->next != NULL)
                    current->next->prev = previous;
            }

            free(current);
            return 1; // Success
        }
        previous = current;
        current = current->next;
        count++;
    }

    return -1; // Node not found or list is empty
}

