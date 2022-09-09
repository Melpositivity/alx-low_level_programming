#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int s, b;

	for (s = 48; s <= 57; s++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (b > s)
			{
				putchar(s);
				putchar(b);

				if (b == 57 && s == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
