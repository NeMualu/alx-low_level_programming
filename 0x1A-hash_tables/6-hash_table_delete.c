#include "hash_tables.h"

/**
 * destroy_hash_table - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void destroy_hash_table(hash_table_t *ht)
{
    hash_table_t *head = ht;
    hash_node_t *current_node, *next_node;
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            current_node = ht->array[i];
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
    free(head->array);
    free(head);
}

