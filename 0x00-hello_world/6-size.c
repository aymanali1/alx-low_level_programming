#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	puts("Size of a char: %zd byte(s)", sizeof(char));
	puts("Size of an int: %zd byte(s)", sizeof(int));
	puts("Size of a long int: %zd byte(s)", sizeof(long));
	puts("Size of a long long int: %zd byte(s)", sizeof(long long));
	puts("Size of a long float: %zd byte(s)", sizeof(float));

	return (0);
}
