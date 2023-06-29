#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define __MINUS 1
#define __PLUS 2
#define __ZERO 4
#define __HASH 8
#define __SPACE 16

/* SIZES */
#define __LONG 2
#define __SHORT 1

/**
 * struct fmt - Format for a print command
 *
 * @fmt: Format.
 * @fn: Function associated.
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt t_fmt - Format for a print command
 *
 * @fmt: Format.
 * @t_fn: Function associated.
 */

typedef struct fmt t_fmt;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
		va_list list, char buffer[], int flags, int width, int precision, int size);

/********** ********** FUNCTION ********** **********/

/* Functins that prints chars abd strings */
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int glags, int width, int precision, int size);

/* Functions that prints numbers */
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int prcision, int size);
int print_octal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
		int flags, int width, int precision, int sie);
int print_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
		char buffer[], int flags, int width, int precision, int size);

/* Function thet prints non printable characters */
int print_non_printable(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function to prints memory address */
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function sthat handles other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/* Function that oprints string in reverse */
int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function that print a string in rot 13 */
int print_rot13string(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* write handlers */
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_positibe, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char buff[], int flags, int width, int precision,
		int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
		int width, int flags, char padd, char extra_c, int padd_start);

int write_unsigned(int is_negative, int ind,
		char buffer[], int flags, int width, int precision, int size);

/***** *****  ***** ***** UTILS ***** *****  ***** *****/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsigned(unsigned long int num, int size);

#endif /* MAIN_H */
