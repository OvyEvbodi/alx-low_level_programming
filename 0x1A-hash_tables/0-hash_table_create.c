#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the newly created hash table
 *
 * Return: on success, a pointer to the newly created hash table,
 * otherwise, NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_ptr = malloc(sizeof(hash_table_t));
 
	if (!table_ptr) MEMORY_ERROR;
	table_ptr->size = size;
	table_ptr->array = calloc(sizeof(hash_node_t *), size);
	if (!table_ptr->array) MEMORY_ERROR;
	return (table_ptr);
}
