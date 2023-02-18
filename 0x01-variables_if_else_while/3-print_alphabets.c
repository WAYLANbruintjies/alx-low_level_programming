#include <stdio.h>

/**
 * main - A program that will print the alphabet in upper case and lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	char alp2;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
	for (alp2 = 'A'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
