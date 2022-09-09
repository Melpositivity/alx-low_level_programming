#include <stdio.h>
#include <ctype.h>
/**
 * main - It Prints alphabetical in lower case...
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (x = 97; x <= 102; x++)
	{
	/*	int lower_x = tolower(x);*/
		putchar(x);
	}
	putchar('\n');
	return (0);
}
