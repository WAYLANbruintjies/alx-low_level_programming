#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints the alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)

{
	char low, e, q;
	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && != q)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
