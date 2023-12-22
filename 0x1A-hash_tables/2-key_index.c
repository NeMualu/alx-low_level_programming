#include "hash_tables.h"

/**
 * key_index - Computes the index for storing a key/value pair
 *             in the array of a hash table.
 * @key: The key to determine the index for.
 * @size: The size of the hash table's array.
 *
 * Return: The computed index for the given key.
 * Description: Utilizes the djb2 algorithm to calculate the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}

