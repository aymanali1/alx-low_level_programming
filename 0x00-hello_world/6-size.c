#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zd byte(s)", sizeof(char));
	printf("Size of an int: %zd byte(s)", sizeof(int));
	printf("Size of a long int: %zd byte(s)", sizeof(long));
	printf("Size of a long long int: %zd byte(s)", sizeof(long long));
	printf("Size of a long float: %zd byte(s)", sizeof(float));

	return (0);
}
