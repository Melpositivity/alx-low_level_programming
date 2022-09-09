#include <stdio.h>

/**
 * main - prints all possible different combinations of two two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int a, b, c, d = 48;
	
	while ((a + b) != (c + d))
	{
		for (a = 48; a < 58; a++)
		{
			for (b = 48; b <= 57; b++)
			{
				for (c = 48; c <= 57; c++)
				{
					for (d = 48; d < 58; d++)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);		
						putchar(d);
						if (((a > b) && (c == d)))
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
