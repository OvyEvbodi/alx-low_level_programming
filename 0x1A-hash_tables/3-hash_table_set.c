#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success,
 * otherwise, 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **new;

	if (!key || !ht || !value) TERMINATE;

	index = key_index((const unsigned char *)key, ht->size);
	new = &(ht->array[index]);
	if (CREATE_NODE(new, key, value) == 1) SUCCESS;
	if (strcmp((*new)->key, key) == 0)
	{
		free((*new)->value);
		(*new)->value = strdup(value);
		SUCCESS;
	}
	TERMINATE;
}

int add_node_beg(hash_node_t **new, const char *key, const char *value)
{
	if (*new == NULL) *new = malloc(sizeof(hash_node_t));
	if (!*new) TERMINATE;
	(*new)->key = strdup(key);
	(*new)->value = strdup(value);
	(*new)->next = NULL;
	SUCCESS;
}
