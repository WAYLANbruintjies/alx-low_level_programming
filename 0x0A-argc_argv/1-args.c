#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: integer value
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
