#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle to be printed by char #
 * Return: void
 */

void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
