#include <stdio.h>
#include <stdlib.h>

void first(void) __attribute__ ((constructor));

/*
 * main - Prints You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n
 * before the main function is executed
 * Return: void
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
