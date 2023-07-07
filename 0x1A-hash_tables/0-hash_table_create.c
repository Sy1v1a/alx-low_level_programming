#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: array size
 *
 * Return: if error NULL,else a pointer to ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htable->array[i] = NULL;
	return (htable);
}
