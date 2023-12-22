#include "hash_tables.h"

/**
 * insert_hash_table_entry - Inserts or updates an entry in a hash table.
 * @ht: A pointer to the target hash table.
 * @key: The key for the entry, which must be a non-empty string.
 * @value: The value to be associated with the key.
 *
 * Return: 0 if the operation fails, 1 otherwise.
 */
int insert_hash_table_entry(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *copied_value;
	unsigned long int idx, position;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	copied_value = strdup(value);
	if (!copied_value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (position = idx; ht->array[position]; position++)
	{
		if (strcmp(ht->array[position]->key, key) == 0)
		{
			free(ht->array[position]->value);
			ht->array[position]->value = copied_value;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(copied_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = copied_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}

