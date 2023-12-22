#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;
	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
