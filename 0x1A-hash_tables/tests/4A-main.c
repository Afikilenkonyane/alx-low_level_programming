#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "betty", "berton");
	hash_table_set(ht, "hetairas", "kitty");
	hash_table_set(ht, "mentioner", "dog");
	printf("---\n");
	printf("K:%s : V:%s\n","mentioner", hash_table_get(ht, "mentioner"));
	printf("K:%s : V:%s\n", "hetairas", hash_table_get(ht, "hetairas"));
	printf("---\n");
	hash_table_print(ht);
	printf("---\n");
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "woof");
	hash_table_set(ht, "mentioner", "cow");
	printf("---\n");
	printf("K:%s : V:%s\n","mentioner", hash_table_get(ht, "mentioner"));
	printf("K:%s : V:%s\n", "hetairas", hash_table_get(ht, "hetairas"));
	printf("---\n");
	hash_table_print(ht);
    return (EXIT_SUCCESS);
}
