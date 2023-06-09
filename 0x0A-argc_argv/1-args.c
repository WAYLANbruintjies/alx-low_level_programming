#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* means to ignore argv */
	printf("%d\n", argc - 1);

	return (0);
}
