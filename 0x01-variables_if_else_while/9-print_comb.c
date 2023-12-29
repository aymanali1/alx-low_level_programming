#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		putchar('\n');
		i++;
	}
	return (0);
}
