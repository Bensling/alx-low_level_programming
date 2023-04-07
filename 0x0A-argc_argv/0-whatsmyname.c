#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program prints its name
 * @argc: number of line arguments.
 * @argv: Array of strings containing the arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
