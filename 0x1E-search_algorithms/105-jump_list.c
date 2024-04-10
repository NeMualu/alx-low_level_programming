#include "search_algos.h"

listint_t *recurse_helper(listint_t *curr, size_t size, size_t step, int val);
listint_t *subrecurse_help(listint_t *curr, size_t step, int val);
listint_t *look_ahead(listint_t *probe, size_t step);

listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (list == NULL)
        return (NULL);

    return (recurse_helper(list, size, sqrt(size), value));
}

listint_t *recurse_helper(listint_t *curr, size_t size, size_t step, int val)
{
    listint_t *next_step = NULL;

    next_step = look_ahead(curr, step);
    printf("Value checked at index [%lu] = [%d]\n", next_step->index, next_step->n);
    if (curr->index + step < size && (next_step->n < val))
        return (recurse_helper(next_step, size, step, val));

    printf("Value found between indexes [%lu] and [%lu]\n", curr->index, next_step->index);

    return (subrecurse_help(curr, step, val));
}

listint_t *look_ahead(listint_t *probe, size_t step)
{
    if (step <= 0 || probe->next == 0)
        return (probe);
    return (look_ahead(probe->next, step - 1));
}

listint_t *subrecurse_help(listint_t *curr, size_t step, int val)
{
    if (curr == NULL || step <= 0 || curr->n > val)
        return (NULL);

    printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);

    if (curr->n == val)
        return (curr);
    else
        return (subrecurse_help(curr->next, step - 1, val));
}

