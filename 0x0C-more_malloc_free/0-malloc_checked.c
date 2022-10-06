#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Prints the number of argumnets
 *
 * @b: argument count
 *
 * Return: return 0
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
