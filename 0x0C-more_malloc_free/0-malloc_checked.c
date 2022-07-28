#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocate memory using malloc.
 * @b: The number of bytes to be allocated.
 * Description: If malloc fails, terminate process with status 98.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
