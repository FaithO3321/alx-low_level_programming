#include "hash_tables.h"
/**
 * hash_table_create - Function to create a new hash table
 * @size: Size of the hash table array
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int a = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (a = 0; a < size; a++)
		hash_table->array[a] = NULL;
	hash_table->size = size;
	return (hash_table);
}
