#include <stdio.h>
/**
 * main - Entry point, prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array of string the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
