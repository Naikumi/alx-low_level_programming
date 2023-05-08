#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - entry point
  * @ac: number of argument
  * @av: array of argument tokens
  * Return: 0 on success
  */
int main(int ac, char *av[])
{
	int fp_from, fp_to, read_stat, write_stat;
	mode_t permission = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fp_from = open(av[1], O_RDONLY);
	if (fp_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fp_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, permission);
	if (fp_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	read_stat = 1;
	while (read_stat)
	{
		read_stat = read(fp_from, buffer, BUFSIZE);
		if (read_stat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (read_stat > 0)
		{
			write_stat = write(fp_to, buffer, read_stat);
			if (write_stat != read_stat || write_stat == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(fp_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_from), exit(100);
	if (close(fp_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_to), exit(100);
	return (0);
}
