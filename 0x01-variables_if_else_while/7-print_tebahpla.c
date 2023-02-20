#include <stdio.h>

/**
 * main - A programme that prints the alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
