#include "lists.h"

/**
 * add_dnodeint - Inserts a new node at the start
 * of a doubly linked list of type dlistint_t
 *
 * @head: Double pointer to the head of the list
 * @n: The value to store in the new node
 * Return: Pointer to the newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *current_head;

    // Allocate memory for the new node
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    // Set the data of the new node
    new_node->n = n;
    new_node->prev = NULL;
    current_head = *head;

    // Find the first node if the list is not empty
    if (current_head != NULL)
    {
        while (current_head->prev != NULL)
            current_head = current_head->prev;
    }

    // Link the new node
    new_node->next = current_head;

    // Set the previous pointer of the former first node if it exists
    if (current_head != NULL)
        current_head->prev = new_node;

    // Update the head of the list
    *head = new_node;

    return (new_node);
}

