#include "search_algos.h"

int jump_recursive_helper(int *array, size_t size, size_t step, size_t index, int value);
int sub_recursive_helper(int *array, size_t size, size_t end, size_t index, int value);

/**
 * jump_search - searches for a value in an array using jump search
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (jump_recursive_helper(array, size, sqrt(size), 0, value));
}

/**
 * jump_recursive_helper - recursively performs jump search
 * @array: array to search
 * @size: size of array
 * @step: jump increment
 * @index: current index
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int jump_recursive_helper(int *array, size_t size, size_t step, size_t index, int value)
{
    printf("Value checked array[%lu] = [%d]\n", index, array[index]);

    /* if value is greater, jump forward */
    if (((index + step < size) && array[index + step] < value))
        return (jump_recursive_helper(array, size, step, index + step, value));

    /* recurse subarray */
    printf("Value found between indexes [%lu] and [%lu]\n", index, (index + step));
    return (sub_recursive_helper(array, size, index + step, index, value));
}

/**
 * sub_recursive_helper - recursively searches within a subarray
 * @array: array to search
 * @size: size of array
 * @end: end of subarray
 * @index: current index
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int sub_recursive_helper(int *array, size_t size, size_t end, size_t index, int value)
{
    if (index >= size || index > end || array[index] > value)
        return (-1);

    printf("Value checked array[%lu] = [%d]\n", index, array[index]);

    if (array[index] == value)
        return (index);
    else
        return (sub_recursive_helper(array, size, end, index + 1, value));
}

