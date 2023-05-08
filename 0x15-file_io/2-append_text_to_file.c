#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of file
  * @text_content: content to append
  * Return: 1 on success or -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_txt_file, i, write_stat;

	if (filename == NULL)
		return (-1);
	append_txt_file = open(filename, O_WRONLY | O_APPEND);
	if (append_txt_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	write_stat = write(append_txt_file, text_content, i);
	close(append_txt_file);
	return (write_stat == -1 ? -1 : 1);
}
