#include "hash_tables.h"

/**
 * remove_hash_table - Frees and removes a hash table.
 * @ht: A pointer to the hash table to be removed.
 */
void remove_hash_table(hash_table_t *ht)
{
    hash_node_t *current_node, *next_node;
    unsigned long int index;

    if (!ht) return;

    for (index = 0; index < ht->size; ++index)
    {
        current_node = ht->array[index];
        while (current_node != NULL)
        {
            next_node = current_node->next;
            free(current_node->key);
            free(current_node->value);
            free(current_node);
            current_node = next_node;
        }
    }
    free(ht->array);
    free(ht);
}

