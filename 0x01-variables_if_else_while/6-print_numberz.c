#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int n = i % 10;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
