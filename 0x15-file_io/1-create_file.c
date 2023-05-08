#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: contents of the created file
 * Return: Always 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, j, wr_num;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}
	for (j = 0; text_content[j]; j++)
		;
	wr_num = write(fp, text_content, j);
	if (close(fp) == -1)
		return (-1);
	return (wr_num == -1 ? -1 : 1);
}
