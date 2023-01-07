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
	if (CREATE_NODE(new, key, value) == 1)
		SUCCESS;
	if (strcmp((*new)->key, key) == 0)
	{
		free((*new)->value);
		(*new)->value = strdup(value);
		SUCCESS;
	}
	return (chaining(new, key, value));
}

/**
 * add_node - add a new node to a hash table
 * @new: the new node to add
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on success,
 * otherwise, 0
 */

int add_node(hash_node_t **new, const char *key, const char *value)
{
	if (*new == NULL)
		*new = malloc(sizeof(hash_node_t));
	if (!*new)
		TERMINATE;
	(*new)->key = strdup(key);
	(*new)->value = strdup(value);
	(*new)->next = NULL;
	SUCCESS;
}


/**
 * chaining - handles collisions for hash tables
 * @new: the new node to add
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
