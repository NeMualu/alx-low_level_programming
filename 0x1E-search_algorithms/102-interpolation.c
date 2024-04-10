#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value);

int interpolation_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (interpolation_search_helper(array, 0, size - 1, value));
}

int interpolation_search_helper(int *array, size_t left, size_t right, int value)
{
    size_t pos = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));

    if (pos > right)
    {
        printf("Value checked array[%lu] is out of range\n", pos);
        return (-1);
    }

    if (left > right)
        return (-1);

    printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

    if (array[pos] == value)
        return (pos);
    else if (array[pos] > value) /* over-shot; move left */
        return (interpolation_search_helper(array, left, pos - 1, value));
    else /* under-shot; move right */
        return (interpolation_search_helper(array, pos + 1, right, value));
}

