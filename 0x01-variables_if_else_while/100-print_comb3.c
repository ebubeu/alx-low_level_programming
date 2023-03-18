#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	k = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = k; j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);

			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	return (0);
}
