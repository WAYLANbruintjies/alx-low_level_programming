#include <stdio.h>

/**
 * main - A programme to print single digit numbers of base 10 with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar(i + '0');

	putchar('\n');
	return (0);
}
