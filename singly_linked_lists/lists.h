#ifndef __LISTS__
#define __LISTS__
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list - list to use for exercice 0
 * Description: list to use for exercice 0
 * @str: string to use
 * @len: int to use
 * @next: peointer to next node
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
