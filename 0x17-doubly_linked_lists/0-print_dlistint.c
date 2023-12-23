#include "lists.h"

/**
 * print_dlistint - Outputs each element in a doubly linked list
 *
 * @head_node: Pointer to the first node of the list
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *head_node)
{
    size_t nodes_total = 0;

    // Confirm the list is not empty
    if (head_node == NULL)
        return nodes_total;

    // Navigate to the beginning of the list
    while (head_node->prev != NULL)
        head_node = head_node->prev;

    // Loop through the list and print each element
    while (head_node)
    {
        printf("%d\n", head_node->n);
        nodes_total++;
        head_node = head_node->next;
    }

    return nodes_total;
}

