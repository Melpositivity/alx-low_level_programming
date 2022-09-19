#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 *
 * Return: No returning
 */

void puts_half(char *str)
{
	int counter;
	int half_counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
	}
	if (counter % 2 == 0)
		half_counter = counter / 2;
	else
		half_counter = ((counter + 1) / 2);
	counter--;
	for (; half_counter <= counter; half_counter++)
	{
		_putchar(*(str + half_counter));

	}
	half_counter--;
	_putchar('\n');
}


