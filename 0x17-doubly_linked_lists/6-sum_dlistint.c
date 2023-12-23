#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data (n)
 * in a doubly linked list of type dlistint_t
 *
 * @head: Pointer to the beginning of the list
 * Return: Sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
    int total_sum;

    // Initialize the sum to 0
    total_sum = 0;

    // Ensure starting from the first node
    while (head && head->prev != NULL)
        head = head->prev;

    // Traverse the list and accumulate the sum
    while (head != NULL)
    {
        total_sum += head->n;
        head = head->next;
    }

    return total_sum;
}

