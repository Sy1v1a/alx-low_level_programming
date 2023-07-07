#include "hash_tables.h"
/**
 * hash_table_set - adds element to a hash taable
 * @ht: pointer to htable
 * @key: key to add, not an empty string
 * @value: key value
 *
 * Return: 0 upon failure, else -1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
