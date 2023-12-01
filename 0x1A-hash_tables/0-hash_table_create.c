#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table.
* @size: The size of the array in the hash table.
*
* Return: A pointer to the newly created hash table, or NULL on failure.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	return (table);
}
