#ifndef MAIN_H
#define MAIN_H

#include "struct.h"
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

void open_console(void);
void handle_sigint(int sig);
void init_var(cmd_t *cmd, char **argv);
char *_itoa(int n);
int getlen(int n);
int _strlen(char *s);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char **gettoks(char *args, char *delimiter);
int _strcmp(char *str_a, char *str_b);
void shell_session(cmd_t *cmd);
void free_envar(cmd_t *cmd);
char *read_input(int status, int *num);
void _prompt(int status);
char *handle_comment(char *input);
char *handle_input(char *input, cmd_t *cmd);
int check_synterr(cmd_t *cmd, char *input);
void *_realloc(void *prt, size_t old_size, size_t new_size);
char **_reallocdp(char **ptr, unsigned int old_size, unsigned int new_size);
int _exec(cmd_t *cmd);
int (*get_builtin(char *input))(cmd_t *);
int _env(cmd_t *cmd);
int cmp_env_name(const char *nenv, const char *name);
char *_getenv(const char *name, char **_environ);
char *_which(char *cmd, char **_environ);
int exit_sh(cmd_t *cmd);
int get_help(cmd_t *cmd);
int c_dir(cmd_t *cmd);
void set_env(char *name, char *value, cmd_t *cmd);
int _setenv(cmd_t *cmd);
int _unsetenv(cmd_t *cmd);
int cd_home(cmd_t *cmd);
int cd_back(cmd_t *cmd);
int cd_curr(cmd_t *cmd);
int cd_parent(cmd_t *cmd);
int cd_path(char *dir, cmd_t *cmd);
char *_strtok(char *strn, const char *separator);
char *copy_info(char *name, char *value);

#endif
