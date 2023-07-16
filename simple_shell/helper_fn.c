#include "main.h"

/**
 * open_console - a function that opens a custom console
 *
 * Return: Nothing
 */

void open_console(void)
{
	int c_fd;

	while ((c_fd == open("/dev/console", O_RDWR)) >= 0)
	{
		if (c_fd >= 3)
		{
			close(c_fd);
			break;
		}
	}
}
