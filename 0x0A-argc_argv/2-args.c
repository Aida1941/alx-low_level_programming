#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: int
 * @argv: array of pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
