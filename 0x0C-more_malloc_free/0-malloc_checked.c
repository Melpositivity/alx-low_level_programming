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
	void *space;

	space = malloc(b);
	if (space == NULL)
		exit(98);
	return (space);
}
