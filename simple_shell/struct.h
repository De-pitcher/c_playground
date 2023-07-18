#ifndef STRUCT_H
#define STRUCT_H

#include "main.h"

typedef struct var_s
{
	int var_len;
	int val_len;
	char *val;
	struct var_s *next;
} var_t;

void free_var(var_t **head);
var_t *add_tail_node(var_t **head, int var_len, char *val, int val_len);

#endif
