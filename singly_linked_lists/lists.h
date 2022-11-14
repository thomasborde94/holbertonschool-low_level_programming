#ifndef __LISTS__
#define __LISTS__
#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);

#endif
