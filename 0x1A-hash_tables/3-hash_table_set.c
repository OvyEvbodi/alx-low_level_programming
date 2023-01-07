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
	hash_node_t **arr_bucket;

	if (!key || !ht || !value || key[0] == '\0')
		TERMINATE;

	index = key_index((const unsigned char *)key, ht->size);
	arr_bucket = &(ht->array[index]);
	if (*arr_bucket == NULL)
		return (CREATE_NODE(arr_bucket, key, value));
	if (strcmp((*arr_bucket)->key, key) == 0)
	{
		free((*arr_bucket)->value);
		(*arr_bucket)->value = strdup(value);
		SUCCESS;
	}
	return (chaining(arr_bucket, key, value));
}

/**
 * add_node - add a new node to a hash table
 * @arr_bucket: the new node to add
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on success,
 * otherwise, 0
 */

int add_node(hash_node_t **arr_bucket, const char *key, const char *value)
{
	*arr_bucket = malloc(sizeof(hash_node_t));
	if (!*arr_bucket)
		TERMINATE;
	(*arr_bucket)->key = strdup(key);
	(*arr_bucket)->value = strdup(value);
	(*arr_bucket)->next = NULL;
	SUCCESS;
}


/**
 * chaining - handles collisions for hash tables
 * @arr_bucket: the new node to add
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success,
 * otherwise, 0
 */
int chaining(hash_node_t **new, const char *key, const char *value)
{
	hash_node_t *temp = *new, *chain_node = NULL;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free((temp)->value);
			(temp)->value = strdup(value);
			SUCCESS;
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
		TERMINATE;
	chain_node->key = strdup(key);
	chain_node->value = strdup(value);
	chain_node->next = *new;
	*new = chain_node;
	SUCCESS;
}
