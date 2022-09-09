#include <stdio.h>

/**
 * main - prints base 10 number
 * from 0 to
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
