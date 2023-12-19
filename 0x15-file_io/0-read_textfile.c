#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and print to STDOUT (POSIX)
 * @filename: text file
 * @letters: range of letters to be computed
 * Return: number of letters/bytes that was read and printed
 * if the file can not be opened or read, return 0
 * and if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *buffer;
	ssize_t r;
	ssize_t w;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	r = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fp);

	return (w);
}
