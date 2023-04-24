#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - function creates a new file and fill with with some content.
 * @filename: name of the file to create.
 * @text_content: text to add to the new file.
 *
 * Return: Always 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, i, num_write;

	fp = i = num_write = 0;
	if (!filename)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	while (text_content && text_content[i])
		i++;

	num_write = write(fp, text_content, i);
	if (num_write < 0)
		return (-1);
	close(fp);
	return (i);
}
