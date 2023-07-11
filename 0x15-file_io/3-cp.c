#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer - 1024 bytes allocated for a buffer to be created
 * @file: name of the file using buffer storage
 * Return: newly-allocated buffer (type char)
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (!buff) /* if (buff == NULL) */
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes all file descriptors
 * @fd: file descriptor to be closed
 * Return: void
 */

void close_file(int fd)
{
	int ext;

	ext = close(fd);

	if (ext == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Description: if argument count is incorrect, exit code 97
 * if file_from does not exist or cannot be read, exit code 98
 * if file_to cannot be created or written to, exit code 99
 * if file_to or file_from cannot close descriptors, exit code 100
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *buff;
	int fp1, fp2, rd, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	fp2 = open(argv[1], O_RDONLY);
	rd = read(fp2, buff, 1024);
	fp1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fp2 == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(fp1, buff, rd);
		if (fp1 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(fp2, buff, 1024);
		fp1 = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_file(fp2);
	close_file(fp1);

	return (0);
}
