#include "hash_tables.h"
/**
 * key_index - gives index of a key in the hash table array
 * @key: the key string
 * @size: the size of the hash table array
 *
 * Return: index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
	{
		return (0);
	}
	hash_value = hash_djb2(key);

	return  (hash_value % size);
}
