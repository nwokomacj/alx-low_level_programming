#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("size of a char: %c bytes(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lli byte(s)\n", sizeof(long long int));
	printf("size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
