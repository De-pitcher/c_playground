#include "main.h"

int is_executable(cmd_t *cmd);
int execmd(cmd_t *cmd);
int check_dir_access(char *dir, cmd_t *cmd);

/**
 * is_executable - determines if it is an executable
 *
 * @cmd: data structure
 * Return: 0 if is not an executable, other number if it does
 */

int is_executable(cmd_t *cmd)
{
	struct stat st;
	int i;
	char *input;

	input = cmd->args[0];
	for (i = 0; input[i]; i++)
	{
		if (input[i] == '.')
		{
			if (input[i + 1] == '.')
				return (0);
			if (input[i + 1] == '/')
				continue;
			else
				break;
		}
		else if (input[i] == '/' && i != 0)
		{
			if (input[i + 1] == '.')
				continue;
			i++;
			break;
		}
		else
			break;
	}
	if (i == 0)
		return (0);

	if (stat(input + i, &st) == 0)
	{
		return (i);
	}
	return (-1);
}


/**
 * _exec - executes the given command
 *
 * @cmd: struct variables
 * Return: 1 on success.
 */
int _exec(cmd_t *cmd)
{
	int (*builtin)(cmd_t *cmd);

	if (cmd->args[0] == NULL)
		return (1);

	builtin = get_builtin(cmd->args[0]);

	if (builtin != NULL)
		return (builtin(cmd));

	return (execmd(cmd));
}

/**
 * execmd - executes command lines
 *
 * @cmd: data relevant (args and input)
 * Return: 1 on success
 */
int execmd(cmd_t *cmd)
{
	pid_t pd;
	pid_t wpd;
	int state;
	int exec;
	char *dir;
	(void) wpd;

	exec = is_executable(cmd);
	if (exec == -1)
		return (1);
	if (exec == 0)
	{
		dir = _which(cmd->args[0], cmd->envar);
		if (check_dir_access(dir, cmd) == 1)
			return (1);
	}

	pd = fork();
	if (pd == 0)
	{
		if (exec == 0)
			dir = _which(cmd->args[0], cmd->envar);
		else
			dir = cmd->args[0];
		execve(dir + exec, cmd->args, cmd->envar);
	}
	else if (pd < 0)
	{
		perror(cmd->argv[0]);
		return (1);
	}
	else
	{
		do {
			wpd = waitpid(pd, &state, WUNTRACED);
		} while (!WIFEXITED(state) && !WIFSIGNALED(state));
	}

	cmd->status = state / 256;
	return (1);
}

/**
 * check_dir_access - function that checks if the directory is accessible
 *
 * @dir: command directory
 * @cmd: cmd struct
 * Return: 1 if there is an error, 0 if not
 */

int check_dir_access(char *dir, cmd_t *cmd)
{
	if (dir == NULL)
	{
		error_h("no such file or directory\n");
		return (1);
	}

	if (_strcmp(cmd->args[0], dir))
	{
		if (access(dir, X_OK) == -1)
		{
			error_h("cannot access directory\n");
			free(dir);
			return (1);
		}
		free(dir);
	}
	else
	{
		if (access(cmd->args[0], X_OK) == -1)
		{
			error_h("cannot access command directory\n");
			return (1);
		}
	}

	return (0);
}
