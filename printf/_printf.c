#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - The printf Function.
 * @format: Format.
 *
 * Return: Printed characters.
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];
	(void)size, (void)precision, (void)width, (void)flags, (void)printed;
	if (!format)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
		}
	}

	print_buffer(buffer, &buff_ind);

	return (printed_chars);
}

/**
 * print_buffer - Prints the content in a buffer if it exist.
 * @buffer: Array of chars.
 * @buff_ind: Index at which to add next char.
 *
 * Return: Nothing.
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
