#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of array of the htable
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
