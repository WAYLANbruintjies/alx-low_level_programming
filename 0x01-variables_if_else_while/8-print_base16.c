#include <stdio.h>
/**
 * main - A programme to print numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (d = 97; d <= 102; d++)
	{
		putchar(d);
	}
		putchar('\n');
	return (0);
}

