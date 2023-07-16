#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <limits.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/stat.h>

#define DELIM " \t\n\r\a"
#define EXEC 1
#define MAXARGS 128

extern char **environ;

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

void open_console(void);
void handle_sigint(int sig);
void init_var(cmd_t *cmd, char **argv);
char *_itoa(int n);
int getlen(int n);
int _strlen(char *s);
char *_strdup(char *str);
void shell_session(cmd_t *cmd);
void free_envar(cmd_t *cmd);
char *read_input(int status, int *num);
void _prompt(int status);
char *handle_comment(char *input);
int check_synterr(cmd_t *cmd, char *input);

#endif
