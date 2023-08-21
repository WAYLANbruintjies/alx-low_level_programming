#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, n;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char c[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	c[0] = l[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	c[1] = l[(add ^ 79) & 63];
	for (i = 0, n = 1; i < len; i++)
		n *= argv[1][i];
	c[2] = l[(n ^ 85) & 63];
	for (n = argv[1][0], i = 0; i < len; i++)
		if ((char)n <= argv[1][i])
			n = argv[1][i];
	srand(n ^ 14);
	c[3] = l[rand() & 63];
	for (n = 0, i = 0; i < len; i++)
		n += argv[1][i] * argv[1][i];
	c[4] = l[(n ^ 239) & 63];
	for (n = 0, i = 0; (char)i < argv[1][0]; i++)
		n = rand();
	c[5] = l[(n ^ 229) & 63];
	printf("%s\n", c);
	return (0);
}
