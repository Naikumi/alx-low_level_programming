#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard out
 * @filename: the file to read fro
 * @letters: the size of letters
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, num_read, rd_stat;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	num_read = 0;
	rd_stat = 1;
	while (letters > BUFSIZE && rd_stat != 0)
	{
		rd_stat = read(fp, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, rd_stat);
		num_read += rd_stat;
		letters -= BUFSIZE;
	}
	rd_stat = read(fp, buffer, letters);
	write(STDOUT_FILENO, buffer, rd_stat);
	num_read += rd_stat;
	close(fp);
	return (num_read);
}
