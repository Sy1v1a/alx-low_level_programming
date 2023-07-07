#include "hash_tables.h"
/**
 * hash_table_get - retrieves the value of a key
 * @ht: pointer to htable
 * @key: the key to get value from
 *
 * Return: if key match return vale else return NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	nd = ht->array[i];
	while (nd && strcmp(nd->key, key) != 0)
		nd = nd->next;
	return ((nd == NULL) ? NULL : nd->value);
}
