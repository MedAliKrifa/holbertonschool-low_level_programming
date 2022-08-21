#include "hash_tables.h"
/**
 * key_index - function that gives index key
 * @key: key
 *@size: hashtable size
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		unsigned long int index = 0;
		unsigned long int slot = hash_djb2(key);

		index = slot % size;
		return (index);
}
