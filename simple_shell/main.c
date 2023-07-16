#include "main.h"

/**
 * main - Entry pointer
 * @argc: Number of argument
 * #argv: Argument vector.
 *
 * Return: int value, according to the status of the program.
 */

int main(int argc, char **argv)
{
	cmd_t cmd;
	(void) argc;

	signal(SIGINT, handle_sigint);
	open_console();
	init_var(&cmd, argv);
	shell_session(&cmd);

	return (cmd.status);
}

/**
 * shell_session - creates a session of reading, evaluating and
 * shell commands in a loop.
 * @cmd: shell commands.
 *
 * Return: Nothing.
 */

void shell_session(cmd_t *cmd)
{
	(void) cmd;
}
