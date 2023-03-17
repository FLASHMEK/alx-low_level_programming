#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	printf("Size of char: %lu.\n", sizeof(char));
	printf("Size of int: %lu.\n", sizeof(int));
	printf("Size of a long int: %lu.\n", sizeof(long int));
	printf("Size of a long long int: %lu.\n", sizeof (long long int));
	printf("Size of a float: %lu.\n", sizeof(float));
	return (0);
}
