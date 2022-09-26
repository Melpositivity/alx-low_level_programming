#include "main.h"
#include <stdlib.h>

/**
 *  _strchr - locates character in a string
 *
 *  @s: the byte to write
 *  @c: the objective to locate
 *  Return: Returns pointer
 */

char *_strchr(char *s, char c)
{
	int index;


	for (index = 0; s[index] || s[index] == '\0'; index++)

		{
			if (s[index] == c)
				return (&s[index]);
			else if (s[index] == '\0')
				break;
		}
	return (NULL);
}

