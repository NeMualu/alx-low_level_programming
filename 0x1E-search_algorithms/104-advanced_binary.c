#include "search_algos.h"

int advanced_binary(int *array, size_t size, int value);
int recurse_helper(int *array, size_t left, size_t right, int value, ssize_t *match);

int advanced_binary(int *array, size_t size, int value)
{
    ssize_t match = -1;

    if (array == NULL)
        return (-1);

    return (recurse_helper(array, 0, size - 1, value, &match));
}

int recurse_helper(int *array, size_t left, size_t right, int value, ssize_t *match)
{
    size_t i = left, mid;

    if (left > right)
        return (*match);

    printf("Searching in array: %d", array[i++]);
    while (i <= right)
        printf(", %d", array[i++]);
    printf("\n");

    mid = left + ((right - left) / 2);

    if (array[mid] == value)
    {
        *match = mid;
        if (right - left > 1)
            mid++;
    }
    else if (array[mid] < value)
        return (recurse_helper(array, mid + 1, right, value, match));

    if (mid != 0)
        return (recurse_helper(array, left, mid - 1, value, match));
    else
        return (*match);
}

