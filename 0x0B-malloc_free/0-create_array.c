#include "main.h"

/**
 * create_array - Creates an array of chars
 * @size: The size of the array
 * @c: char to be computed
 * Return: Values of type char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
