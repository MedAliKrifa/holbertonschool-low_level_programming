#include "hash_tables.h"
/**
 * hash_table_create - to create the table
 *@size: table size
 * Return: pointer or NULLL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
