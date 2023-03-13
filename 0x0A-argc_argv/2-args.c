#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argc;
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
