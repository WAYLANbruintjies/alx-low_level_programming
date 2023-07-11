#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Creates a file
 * @filename: file to be created
 * @text_content: NULL terminated string to write to the file
 * NOTE: created file must have those permissions read & write
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * Return: 1 (Success), -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
        int fp, x, size = 0;

        if (!filename) /* if (filename == NULL) */
                return (-1);

        if (text_content != NULL)
        {
                for (size = 0; text_content[size];)
                        size++;
        }

        fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        x = write(fp, text_content, size);

        if (fp == -1 || x == -1)
                return (-1);

        close(fp);

        return (1);
}
