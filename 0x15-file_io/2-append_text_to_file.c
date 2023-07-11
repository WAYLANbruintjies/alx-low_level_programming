#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the file to be computed
 * @text_content: NULL terminated string to add to the end of the file
 * NOTE: do not create the file if it does not exist
 * If text_content is NULL, do not add anything
 * Return: 1 (Success), -1 (Failure)
 * If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, x, scope = 0;

	if (!filename) /* if (filename == NULL) */
		return (-1);

	if (text_content != NULL)
	{
		for (scope = 0; text_content[scope];)
			scope++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	x = write(fp, text_content, scope);

	if (fp == -1 || x == -1)
		return (-1);

	close(fp);

	return (1);
}
