#include "search_algos.h"

int binary_recursive_helper(int *array, size_t left, size_t right, int value);

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (binary_recursive_helper(array, 0, size - 1, value));
}

/**
 * binary_recursive_helper - recursively search for a value in a sorted array
 * @array: pointer to the first element of the array
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int binary_recursive_helper(int *array, size_t left, size_t right, int value)
{
    size_t i = left, mid;

    if (left > right)
        return (-1);

    /* print search progress */
    printf("Searching in array: %d", array[i++]);
    while (i <= right)
        printf(", %d", array[i++]);
    printf("\n");

    /* calculate mid */
    mid = left + ((right - left) / 2);

    /* check if mid is value */
    if (array[mid] == value)
        return (mid);
    else if (array[mid] > value)
    {
        if (mid != 0)
            return (binary_recursive_helper(array, left, mid - 1, value));
        else
            return (-1);
    }
    else
        return (binary_recursive_helper(array, mid + 1, right, value));
}

