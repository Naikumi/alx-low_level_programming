#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile – Writes a function that reads a text file and prints it
 * @filename: a variable pointer
 * @letters: the size of letters
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, num_read, num_write;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		free(txt);
		return (0);
	}

	num_read = read(fp, txt, letters);

	num_write = write(STDOUT_FILENO, txt, num_read);

	close(fp);

	return (num_write);
}
