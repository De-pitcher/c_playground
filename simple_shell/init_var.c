#include "main.h"

/**
 * init_var - initialized the shell variables
 * @cmd: struc with shell variables.
 * @argv: argument vector.
 *
 * Return: Nothong.
 */

void init_var(cmd_t cmd, char *argv)
{
	int i;

	cmd->mode = EXEC;
	cmd->ready = 1;
	cmd->status = 0;
	cmd->count = 1;
	cmd->input = NULL;
	cmd->pid = _itoa(getpid());
}
