 #include "lists.h"

/**
 * add_dnodeint_end - Appends a new node at the end
 * of a doubly linked list of type dlistint_t
 *
 * @head: Double pointer to the head of the list
 * @n: The value to store in the new node
 * Return: Pointer to the newly added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *current_tail;
    dlistint_t *new_node;

    // Allocate memory for the new node
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    // Set the data of the new node
    new_node->n = n;
    new_node->next = NULL;

    current_tail = *head;

    // Find the last node if the list is not empty
    if (current_tail != NULL)
    {
        while (current_tail->next != NULL)
            current_tail = current_tail->next;

        current_tail->next = new_node;
    }
    else
    {
        // If the list is empty, set the new node as the head
        *head = new_node;
    }

    // Set the previous pointer of the new node
    new_node->prev = current_tail;

    return (new_node);
}

