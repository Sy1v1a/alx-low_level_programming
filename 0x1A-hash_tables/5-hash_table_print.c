#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht:pointer to htable to print
 *
 * Description: key/value should be printed in order
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i;
	unsigned char cc = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (cc == 1)
				printf(", ");
			nd = ht->array[i];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd !=  NULL)
					printf(", ");
			}
			cc = 1;
		}
	}
	printf("}\n");
}
