#include <stdio.h>
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
	int fp, i, err;

	fp = i = err = 0;
	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fp < 0)
			return (-1);
	while (text_content && text_content[i])
		i++;

	err = write(fp, text_content, i);
	if (err < 0)
		return (-1);
	close(fp);
	return (i);
}
