#include "search_algos.h"

int recursive_helper(int *array, size_t size, int value, size_t index);

/**
 * linear_search - searches for a value in an integer array using linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (recursive_helper(array, size, value, 0));
}

/**
 * recursive_helper - recursively search for a value in an integer array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * @index: current index
 *
 * Return: the index where value is located, or -1 if not found
 */
int recursive_helper(int *array, size_t size, int value, size_t index)
{
    if (index == size)
        return (-1);

    printf("Value checked array[%lu] = [%d]\n", index, array[index]);

    if (array[index] == value)
        return (index);

    return (recursive_helper(array, size, value, index + 1));
}

