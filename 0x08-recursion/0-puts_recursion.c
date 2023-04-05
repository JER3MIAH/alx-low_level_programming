#include "main.h"

/**
 * main - this function returns a script
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
	{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
