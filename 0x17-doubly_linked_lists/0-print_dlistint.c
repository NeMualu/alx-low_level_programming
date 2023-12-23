#include "lists.h"

/**
 * print_dlistint - Displays the elements of a dlistint_t linked list
 *
 * @h: Pointer to the start of the list
 * Return: Total count of the nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    int node_count = 0;

    // Check if the list is not empty
    if (h == NULL) {
        return node_count;
    }

    // Navigate to the beginning of the list
    while (h->prev != NULL) {
        h = h->prev;
    }

    // Loop through the list and print each element
    while (h != NULL) {
        printf("%d\n", h->n);
        node_count++;
        h = h->next;
    }

    return (size_t)node_count;
}

