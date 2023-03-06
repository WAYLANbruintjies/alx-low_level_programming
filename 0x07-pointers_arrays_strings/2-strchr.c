#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string the be checked
 * @c: Character to be identify
 * Result: String s if c char is found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	return (NULL);
}
