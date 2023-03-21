#include "main.h"

/**
 *main - This function prints all alphabets in lowercase
 *
 *Return: always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
