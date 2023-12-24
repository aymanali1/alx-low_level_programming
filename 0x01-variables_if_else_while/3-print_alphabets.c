#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch1 = 'a';

	for (ch1 = 'a'; ch1 <= 'z'; ch1++)
	{
		putchar(ch1);
	}
	char ch2 = 'A';

	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
	{
		putchar(ch2);
	}
	putchar('\n');

	return (0);
}
