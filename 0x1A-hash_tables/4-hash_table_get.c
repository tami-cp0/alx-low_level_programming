#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key in a hash table.
*
* @ht: A pointer to the hash table.
* @key: The key to search for.
*
* Return: The value associated with the key, or NULL if key not found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;

	hash_node_t *current;

	if (!ht || !key || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
