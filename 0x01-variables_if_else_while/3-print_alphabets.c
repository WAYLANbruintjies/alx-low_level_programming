#include <stdio.h>

/**
 * main - A program that will print the alphabet in upper case and lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp low;
	char alp up;
	for (alp low = 'a'; alp low <= 'z'; alp low++)
	{
		putchar(alp low);
	}
	for (alp up = 'A'; alp up <= 'Z'; alp up++)
	{
		putchar(alp up);
	}
	putchar('\n');
	return (0);
}
