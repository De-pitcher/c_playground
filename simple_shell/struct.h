#ifndef STRUCT_H
#define STRUCT_H

#include "main.h"

typedef struct cmd_t
{
        int mode;
        int ready;
        int status;
        int count;
        char *input;
        char *pid;
        char **args;
        char **argv;
        char **envar;
} cmd_t;

typedef struct var_s
{
	int var_len;
	int val_len;
	char *val;
	struct var_s *next;
} var_t;

typedef struct sep_s
{
	char sep;
	struct sep_s *next;
} sep_t;

typedef struct line_s
{
	char *line;
	struct line_s *next;
} line_t;

typedef struct builtins
{
	char *name;
	int (*f)(cmd_t *cmd);
} built_t;

void free_var(var_t **head);
var_t *add_tail_node(var_t **head, int var_len, char *val, int val_len);

#endif
