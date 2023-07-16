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
	char **av;
	char **envar;
} cmd_t;

void open_console(void);
void handle_signint(int sig);

#endif
