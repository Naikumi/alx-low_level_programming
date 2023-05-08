#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: the file to read from
 * @letters: the letters' size
 * Return: the actual number of letters read or 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, num_letters_read, rd_stat;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (-1);
	while (letters > BUFSIZE && rd_stat != 0)
	{
		rd_stat = read(fp, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, rd_stat);
		num_letters_read += rd_stat;
		letters -= BUFSIZE;
	}
	rd_stat = read(fp, buffer, letters);
	write(STDOUT_FILENO, buffer, rd_stat);
	close(fp);
	return (num_letters_read);
}
