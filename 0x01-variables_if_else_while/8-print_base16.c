#include <stdio.h>
/**
 * main - A programme to print numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
		putchar(i + '0');

	putchar('\n');
	return (0);
}

