#include "main.h"

/**
 * main - A function to print the alphabet in lowercase, new line follows
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
