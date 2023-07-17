#include "main.h"

void _memcpy(void *newprt, const void *ptr, unsigned int size);

/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer that points to the memory previously allocated
 * @old_size: bite-size of the allocated space of pointer
 * @new_size: new bite-size of the new memory block.
 *
 * Return: pointer
 * if new_size == old_size, pointer is returned without changes
 * if malloc fails, returns NULL
 */

void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void *newptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);

	if (new_size < old_size)
		_memcpy(newptr, ptr, new_size);
	else
		_memcpy(newptr, ptr, old_size);

	free(ptr);
	return (newptr);
}

/**
 * _memcpy - copies information between the void pointers
 * @newptr: a pointer that points to the new destination
 * @ptr: source of the pointer
 * @size: the size of the new pointer
 *
 * Return: Nothing.
 */

void _memcpy(void *newptr, const void *ptr, unsigned int size)
{
	char *char_ptr = (char *)ptr;
	char *char_newptr = (char *)newptr;
	unsigned int i;


	for (i = 0; i < size; i++)
		char_newptr[i] = char_ptr[i];
}
