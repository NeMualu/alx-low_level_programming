#include "hash_tables.h"

/**
 * free_hash_table - Frees the memory allocated for a hash table.
 * @ht: The hash table to be freed.
 */
void free_hash_table(hash_table_t *ht)
{
	hash_node_t *current_node, *next_node;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
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

