#include <stdio.h>
/**
 * main - Entry point, prints the number of arguments
 * @argc: number of command line arguments.
 * @argv: array of string contains the program command line arguments.
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
