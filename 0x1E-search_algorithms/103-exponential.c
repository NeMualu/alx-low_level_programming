#include "search_algos.h"

int exponential_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recurse_helper(int *array, size_t left, size_t right, int value);

int exponential_search(int *array, size_t size, int value)
{
    size_t right = 1, left;

    if (array == NULL)
        return (-1);

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", right, array[right]);
        right *= 2;
    }

    if (array[right] == value)
        return (right);

    left = right / 2;

    if (right >= size)
        right = size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    return (recurse_helper(array, left, right, value));
}

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (recurse_helper(array, 0, size - 1, value));
}

int recurse_helper(int *array, size_t left, size_t right, int value)
{
    size_t i = left, mid;

    if (left > right)
        return (-1);

    printf("Searching in array: %d", array[i++]);
    while (i <= right)
        printf(", %d", array[i++]);
    printf("\n");

    mid = left + ((right - left) / 2);

    if (array[mid] == value)
        return (mid);
    else if (array[mid] > value)
    {
        if (mid != 0)
            return (recurse_helper(array, left, mid - 1, value));
        else
            return (-1);
    }
    else
        return (recurse_helper(array, mid + 1, right, value));
}

