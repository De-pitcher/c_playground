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

void open_console(void);

#endif
