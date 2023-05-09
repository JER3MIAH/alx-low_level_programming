#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t ed;
	ssize_t wr;
	ssize_t ti;

	ed = open(filename, O_RDONLY);
	if (ed == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	ti = read(ed, buff, letters);
	wr = write(STDOUT_FILENO, buff, ti);

	free(buff);
	close(ed);
	return (wr);
}
