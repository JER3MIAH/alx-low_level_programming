#include <stdio.h>
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 * 
 */
int create_file(const char *filename, char *text_content)
{
	int ed, wr, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	ed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(ed, text_content, lens);

	if (ed == -1 || wr == -1)
		return (-1);

	close(ed);

	return (1);
}
