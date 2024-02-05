#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generates a valid keygen for the user for the crackme5
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success) Always, 1 (Failure)
 */
int main(int argc, char *argv[])
{
	unsigned int a, b;
	size_t span, count;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	span = strlen(argv[1]);
	p[0] = l[(span ^ 59) & 63];
	for (a = 0, count = 0; a < span; a++)
		count += argv[1][a];
	p[1] = l[(count ^ 79) & 63];
	for (a = 0, b = 1; a < span; a++)
		b *= argv[1][a];
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], a = 0; a < span; a++)
		if ((char)b <= argv[1][a])
			b = argv[1][a];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (b = 0, a = 0; a < span; a++)
		b += argv[1][a] * argv[1][a];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, a = 0; (char)a < argv[1][0]; a++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
