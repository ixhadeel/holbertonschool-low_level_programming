#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add/update
 * @key: the key, cannot be empty
 * @value: the value associated with the key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	char *v_copy;
	unsigned long int idx;

	if (!ht || !key || !*key || !value)
		return (0);

	v_copy = strdup(value);
	if (!v_copy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	/* إذا الكي موجود أصلاً، نحدث القيمة */
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = v_copy;
			return (1);
		}
		tmp = tmp->next;
	}

	/* إنشاء نود جديد */
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(v_copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key) /* سطر حماية إضافي */
	{
		free(new);
		free(v_copy);
		return (0);
	}
	new->value = v_copy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
