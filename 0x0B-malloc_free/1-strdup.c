#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Prints the number of argumnets
 *
 * @str: argument count
 *
 * Return: return 0
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
