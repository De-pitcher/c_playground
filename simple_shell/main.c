#include "main.h"

/**
 * main - Entry pointer
 * @argc: Number of argument
 * #argv: Argument vector.
 *
 * Return: int value, according to the status of the program.
 */

int main(int argc, char **argc)
{
	cmd_t cmd;
	(void) argc;

	signal(SIGINT, handle_sigint);
}
