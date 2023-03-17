#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		/** use + 48||'0' when printing numbers with putchar..from ASCII */
		putchar(i + 48);
	}
	putchar('\n');

	return (0);
}
