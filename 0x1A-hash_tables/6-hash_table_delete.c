#include "hash_tables.h"

/**
 * dispose_hash_table - Completely removes a hash table from memory.
 * @htable: A pointer to the hash table to be deleted.
 */
void dispose_hash_table(hash_table_t *htable)
{
    hash_table_t *table_head = htable;
    hash_node_t *current_node, *next_node;
    unsigned long int idx;

    for (idx = 0; idx < htable->size; idx++)
    {
        if (htable->array[idx] != NULL)
        {
            current_node = htable->array[idx];
            while (current_node != NULL)
            {
                next_node = current_node->next;
                free(current_node->key);
                free(current_node->value);
                free(current_node);
                current_node = next_node;
            }
        }
    }
    free(table_head->array);
    free(table_head);
}

